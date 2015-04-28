#include "main.h"
#include <cmath>
#include <algorithm>
#include <string>

#define PI 3.1415926535 //Define the value of Pi


// structure for entry into R table
struct RtableEntry
{  
  float alpha;
  float radius; 
  RtableEntry *next;
};

/*************Global Type Definitions*****************************************/
//typedef RtableEntry *entry_ptr;

/*****************************************************************************/

bool MyApp::Menu_Extraction_HoughMatching( Image &image )
{
    if ( image.IsNull() ) return false;     //checks if the image is valid
	
	double timeElapse = 0;

    //initalize an array to keep track of found numbers or letters
    int plateCols[7] = { 0 };
    char plateValues[7] = { ' ' };
    
    //call the extraction algorithm
    houghExtraction( image, plateValues, plateCols );
        
    //order the output according to col position
    orderPlateValues( plateValues, plateCols, timeElapse );
	
    //display alpha-numeric sequence
	//display time taken
	return true;
}



void MyApp::houghExtraction( Image &image, char plateValues[], int plateCols[] )
{     
    //This algorithm is interpreted from hough.pdf that Weiss posted on the web" 

    RtableEntry *curr;

    // template image
    Image mask;  // mask object to hold template image
    int xReference = 0; // x coord of reference point in template
    int yReference = 0; // y coord of reference point in template
    float count = 0.0; // used to compute reference point in mask 

    RtableEntry *Rtable[360] = {0}; // R table with a resolution of 360 degrees 
  
    
    int threshold = 250; // threshold needed for R-tabel computation( defines edge pixel )

    int imageRows = image.Height(); // get dimensions of image
    int imageCols = image.Width();
   
    Image accumulatorArray( imageRows, imageCols );

    int numDetected = 0;

    
    string CorImgLabel;
    string maskVersion[] = { "-100", "-90", "-80", "-110", "-120" };
    string maskValue[] = { "2", "0", "3", "4", "5", "6", "7", "8", "9", 
			               "A", "B", "C", "D", "E", "F", "G", "H", "J", 
			               "K", "M", "N", "O", "P", "Q", "R", "S", "U",
		            	   "V", "W", "X", "Y", "Z", "T", "L", "I", "1" };
    for( int ML = 0; ML < 36; ML++ ) // for each of the 36 template images
    {   //int MV = 0;
     for( int MV = 0; MV < 5; MV++ )
     {

        accumulatorArray.Fill(Pixel(0,0,0));

     // int **accumulatorArray = new (nothrow) int*[imageRows]; // accumulator array

     // for( int i = 0; i < imageRows; i++ )
     // {
     //   accumulatorArray[i] = new int[imageCols];//[imageCols];
        
     // }

     // for( int i = 0; i < imageRows; i++ ) //initialize accumulator array to zero
     // {
     //   for( int j = 0; j < imageCols; j++ )
     //   {
     //   accumulatorArray[i][j] = 0;
     //   }
     // }	



        //copy current image to write the correlated values to late 
       // Image XCorImg( image );
        //XCorImg.Fill( Pixel( 0, 0, 0 ) );

        CorImgLabel = "Mask = "; // get name of current mask
  
        // read in template image from file
        string name = "../images/templates/" + maskValue[ML] + "/" + 
                           maskValue[ML] + maskVersion[MV] + ".JPG";
        Image mask( name );

        //check for template data
        if( mask.IsNull() )
            continue;  // skip to next template if current one is not found

        //Prints to the console what mask is being processed
         cout << "Running Mask: " << maskValue[ML] + maskVersion[MV] << endl;

    
        int maskRows = mask.Height();  // get mask dimensions
        int maskCols = mask.Width();
   

        //COMPUTE R-TABLE //
       
        float radius = 0.0; // radius length from reference point to boundary 
        float alpha = 0.0; // orienation of boundary point relative to centroid
        float theta = 0.0; // angle between x axis and radius of centroid to boundary
        //create filter mask matrix
        //These are seperable, but using a 3x3 matrix
        int maskX[9] = {-1, 0, 1, -2, 0, 2, -1, 0, 1};
        int maskY[9] = {1, 2, 1, 0, 0, 0, -1, -2, -1};
        float sumX = 0.0;
        float sumY = 0.0;
        //int i = 0;  // loop variable to index sobel masks

        Image magnitudeTemp( mask );
       
        // COMPUTE GRADIENT MAGNITUDE FOR EACH PIXEL IN TEMPLATE IMAGE //
        sobelMagnitude( magnitudeTemp );  
               
        
    //DETERMINE CENTRIOD OF TEMPLATE IMAGE //  
        for( int y = 0; y < maskRows; y++ ) 
        {
          for( int x = 0; x < maskCols; x++ )
          {
            if( magnitudeTemp[y][x] > threshold )
            {
              xReference += x;
              yReference += y;
              count += 1.0;
            }      
          }
        }

        xReference /= count;  // finish computing the centroid point
        yReference /= count;

        int num = 1;
        //Build R-table
        for( int r = 1; r < maskRows - 1; r++ )
        {
          for( int c = 1; c < maskCols - 1; c++ )
          { int z = 0; // initialize important variables for calculation
            sumX = 0.0;
            sumY = 0.0;
            int rbound = r - 1;
            int cbound = c - 1;
           // int num = 1;
            if( magnitudeTemp[r][c] > threshold )
            {  
              //calculate theta for this edge pixel
              for( int i = r-1; i < (3+rbound); i++ )
              {
                for( int j = c-1; j < (3+cbound); j++ )
                {
                  //cout << num << endl;
                  sumX += maskX[z] * magnitudeTemp[i][j];
                  sumY += maskY[z] * magnitudeTemp[i][j];
                  z++;
                  //num++;
                    
                }

              }               
              theta = atan2( (double) sumY, (double) sumX ); // calculate theta
              theta = theta * 180 / PI; // convert from radians to degrees
              
              if( theta < 0 ) // if theta is negative, put into positive 0 - 360 range
                theta += 360;
              else if( theta > 360 )// if, somehow, theta is too large, put into 0 - 360 range
                theta = theta - 360; 
             
              //cout << "theta " << theta << endl;
                                  
              //compute radius from centroid to boundary point
              radius = sqrt( ( ( xReference - c ) * ( xReference - c ) ) +       
                             ( ( yReference - r ) * ( yReference - r ) ) );
 
              //compute orientation of boundary point relative to centroid
              alpha = atan2( ( (double)  yReference - r ) , ( (double)  xReference - c ) );
 
              //convert alpha from radians to degrees
              alpha = ( alpha * 180.0 / PI  );
    
              if( alpha < 0.0 ) // make alpha positive if it is negative
                alpha += 360.0;
              else if( alpha > 360 ) // fit alpha in range 0 - 359 if too large
                alpha = alpha - 360;

              
                // cout << theta << endl;            
                 RtableEntry *temp = new (nothrow) RtableEntry;
                 temp -> radius = radius;
                 temp -> alpha = alpha;
                 temp -> next =  Rtable[ (int) (theta+.5) ] ;
                // cout << "radius " << temp->radius << " alpha "<< temp-> alpha << " theta " << theta << endl;
                
                 Rtable[ (int) (theta+.5) ] = temp;

                 num += 1;
                // cout << "here" << endl;
                      
              } // end threshold magnitude

            } // end template columns

          } // end template rows

              //cout << "BUILT R TABLE" << endl;     
         
        
        // COMPUTE GRADIENT MAGNITUDE FOR EACH PIXEL IN IMAGE //

        Image imageMagCopy = image; // make copy of image to ensure data integrity
       // Image imageDirCopy = image;

        sobelMagnitude( imageMagCopy ); // apply sobel edge magnitude operation to image copy
        
       // sobelDirection( imageDirCopy ); //apply sobel edge direction operation to image copy
    
        float xCoord = 0.0; // x coordinate to index accumulator array
        float yCoord = 0.0; // y coordinate to index accumulator array
         


/////////////////////////////////////////////////////////////////////    
        // BUILD ACCUMULATOR ARRAY //
/////////////////////////////////////////////////////////////////////
        int max = 0;
        int colPos = 0;
        for( int r = 1; r < imageRows - 1; r++ )
        {
          for( int c = 1; c < imageCols - 1; c++ )
          {
            if( imageMagCopy[r][c] > threshold )  // if pixel is an edge pixel
            { int z = 0;
              sumX = 0.0;
              sumY = 0.0;
              int rbound = r -1;
              int cbound = c-1;
            //  cout << "Building accumulator array" << endl;
              
              //Calculate theta for current edge pixel
              for( int i = r-1; i < ( 3+rbound ) ; i++ )
              {
                for( int j = c-1; j < ( 3+cbound ); j++ )
                {
                  sumX += maskX[z] * imageMagCopy[i][j];
                  sumY += maskY[z] * imageMagCopy[i][j];
                  z++;
                    
                }

              }               
              theta = atan2( (double) sumY, (double) sumX ); // calculate theta
              theta = theta * 180 / PI; // convert from radians to degrees

              if( theta < 0 ) // if theta is negative, put into positive 0 - 360 range
                theta += 360;
              else if( theta > 360 )// if, somehow, theta is too large, put into 0 - 360 range
                theta = theta - 360; 
             
                                   
                
              // set interator to proper theta index in R table
              curr = Rtable [ (int) ( theta +.5) ]; 
             // cout << "before incrementation" << endl;         
              // while pointing at an entry with a particular theta value
              while( curr != NULL )  
             {   
          //calculate the x and y coordinates for the position in the accumulator array to be incremented 
          // NOTE: Convert alpha to radians as cos and sin funcs expect radians for parameters              
                 float alphaCos = ( cos( curr->alpha * PI/180 ) );
                
                 float alphaSin = ( sin( curr->alpha * PI/180 ) );
                
                 xCoord = ( c +  curr->radius  * alphaSin  );  

                 yCoord = ( r +  curr->radius * alphaCos );                   
         
                 //cout << "current radius " << curr -> radius << "current alpha " << curr -> alpha << endl;
                 //cout << "current row in image " << r << "current col in image " << c << endl;
                // cout << "xCoord " << xCoord << "yCoord " << yCoord << endl;
              
                
                 // if the calculated x and y coordinates are legal, increment accumulator array
                 if( xCoord >= 0.0 && xCoord < imageCols - 1 && yCoord < imageRows -1 && yCoord >= 0.0 )
                 {
                  //cout << "GOING TO INCREMENT ACCUMULATOR ARRAY" << endl;
                  accumulatorArray[(int)(yCoord+.5)][(int)(xCoord+.5)] = accumulatorArray[(int)(yCoord+.5)][(int)(xCoord+.5)] + 1; 
                  //cout <<"Tally for spot at xy coords " <<  accumulatorArray[(int)(yCoord+.5)][(int) (xCoord+.5)] << endl;
                   if( accumulatorArray[(int)(yCoord+.5)][(int) (xCoord+.5)] > max )
                   {
                     max = accumulatorArray[(int)(yCoord+.5)][(int) (xCoord+.5)];
                     colPos = ( (int) xCoord + .5 ); 
                   }
                 }
                 
                               
                 //cout << "theta " << theta << endl;
                // cout << "mask: " << name << endl;
                 
                 curr = curr -> next; //move down to the next pair of ( alpha, radius )
                                              
                } // endwhile

             } // end if mag threshold

          } // end Mag image cols

        } // end mag image rows

       // cout << "BUILT ACCUMULATOR ARRAY" << endl;
        //int max = 0; // maximum value in accumulator array

        //int colPos = 0; // column position of possible match in image

        

    //Possible locations for the shape are given by maxima in accumulator array
     // search for maxima in accumulator array
        /*for( int r = 0; r < imageRows; r++ )
        {
          for( int c = 0; c < imageCols; c++ )
          {
            if( accumulatorArray[r][c] > max ) // get max value in accumulator;
            {
              max = accumulatorArray[r][c];
              colPos = c;
            }
          }
        } */

     cout << max << endl;
     cout << "number of nodes " << num << endl;
     


     if ( numDetected == 0 )
     {
         plateCols[numDetected] = colPos;
         plateValues[numDetected] = maskValue[ML][0];
         //numDetected = 7;
     }   

     //save the matches in the array
     else 
     {
        //checks if the template match is within 75 pixels, to eliminate redundant matches
       if ( abs( colPos - plateCols[numDetected-1] ) > 75 )
       {   
		     plateCols[numDetected] = colPos; // save column locaction of possible match
	         plateValues[numDetected] = maskValue[ML][0]; // save mask character processed
             numDetected = numDetected + 1; // increment the number of found characters
       }
     }
        cout << "Made it here--------------------------------------------------------------" << endl;
          //exits the processing of the plate image if 7 characters are already found
     if( numDetected >= 7 )
       return;



    /*for( int i = 0; i < imageRows; i++ )
    {
        for ( int j = 0; j < imageCols; j++ )
        {
            XCorImg[i][j] = accumulatorArray[i][j];

        }
    } */

     //displays the hough correlation in a new image for each mask
     CorImgLabel += maskValue[ML];
     histogramStretch( accumulatorArray );
     displayImage(accumulatorArray, CorImgLabel);
               

           // delete R table
    for( int x = 0; x < 360; x++ )
    {
      while( Rtable[x] != NULL )
      {
        //RtableEntry *curr;

        curr = Rtable[x];

        Rtable[x] = Rtable[x] -> next;

       // cout << curr << endl;

        delete curr;
      }// end while Rtable[x] != NULL 
      
    }// end for x = 0 to 360, degree fills

   

    cout << plateValues[0];

            
                   
        }// end version

    }// end character

}// end function



