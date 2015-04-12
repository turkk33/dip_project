#include "templates.h"

/*---Values for '0'---*/
    mask22x12 num0 = 
                   { {{1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1},
                      {1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1}, 
                      {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1}, 
                      {1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1}, 
                      {1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1}, 
                      {1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1}, 
                      {1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1}, 
                      {1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 1}, 
                      {1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 1}, 
                      {1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 1}, 
                      {1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 1}, 
                      {1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 1}, 
                      {1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 1}, 
                      {1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 1}, 
                      {1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 1}, 
                      {1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1}, 
                      {1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1}, 
                      {1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1, 1}, 
                      {1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1}, 
                      {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1}, 
                      {1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1}, 
                      {1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1}},
                      22, 12, '0'};

    
    /*---Values for '1'---*/
      mask22x12 num1 =  
                  {{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
                     1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 
                     1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 
                     1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 
                     1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 
                     1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 
                     1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 
                     1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 
                     1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 
                     1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 
                     1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 
                     1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 
                     1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 
                     1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 
                     1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 
                     1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 
                     1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 
                     1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 
                     1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 
                     1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 
                     0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 
                     1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1 },
                     22, 12, '0' };
    
    /*---Values for '2'---*/
      mask22x12 num2 = 
                  {{ 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1,
                     1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 
                     1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 
                     1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 
                     1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 
                     1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 
                     1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 
                     1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 
                     1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 
                     1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 
                     1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 
                     1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 
                     1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 
                     1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 
                     1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 
                     1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 
                     1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 
                     1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 
                     1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 
                     1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 
                     1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
                     1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
                     22, 12, '2'};
    
    /*---Values for '3'---*/
      mask22x12 num3 = 
                  {{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
                     1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 
                     1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 
                     1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 
                     1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1, 1,  
                     1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 
                     1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 
                     1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 
                     1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 
                     1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 
                     1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 
                     1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 
                     1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 
                     1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 
                     1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 
                     1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 
                     1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 
                     1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 
                     1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 1, 
                     1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 
                     1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1,
                     1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1 },
                     22, 12, '3'};
    
    /*---Values for '5'---*/
      mask22x12 num5 = 
                  {{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1,
                     1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 
                     1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 
                     1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
                     1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
                     1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
                     1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
                     1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
                     1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 
                     1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 
                     1, 0, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 
                     1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 
                     1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 
                     1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 
                     1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 
                     1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 
                     1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 
                     1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 
                     1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 
                     1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 
                     1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 
                     1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
                     22, 12, '5'};
        
    /*---Values for '6'---*/
      mask22x12 num6 = 
                  {{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
                     1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 
                     1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 
                     1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 
                     1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 
                     1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 
                     1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 
                     1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 
                     1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 
                     1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 
                     1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 
                     1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 
                     1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 
                     1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 
                     1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 
                     0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 
                     1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 
                     1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 1, 
                     1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 
                     1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 
                     1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 
                     1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
                     22, 12, '6'};

    /*---Values for '8'---*/
      mask22x12 num8 = 
                  {{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
                     1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 
                     1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 
                     1, 1, 0, 0, 1, 1, 1, 1, 0, 0, 1, 1, 
                     1, 1, 0, 0, 1, 1, 1, 1, 0, 0, 1, 1, 
                     1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 
                     1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 
                     1, 1, 0, 1, 1, 1, 1, 1, 0, 0, 1, 1, 
                     1, 1, 0, 0, 1, 1, 1, 1, 0, 0, 1, 1, 
                     1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 
                     1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 
                     1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 
                     1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 1, 
                     1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 1, 
                     1, 0, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 
                     1, 0, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 
                     1, 0, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 
                     1, 0, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 
                     1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 1, 
                     1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 
                     1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 
                     1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
                     22, 12, '8'};

    
    /*---Values for '9'---*/
      mask22x12 num9 = 
                  {{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
                     1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 
                     1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 
                     1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 
                     1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 
                     1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 
                     1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 
                     1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 
                     1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 
                     1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 
                     1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 
                     1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 
                     1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 
                     1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 
                     1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 
                     1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 
                     1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 
                     1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 
                     1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 
                     1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 
                     1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 
                     1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1 },
                     22, 12, '9'};
          
    /*---Values for 'A'---*/      
      mask22x12 letterA = 
                  {{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
                      1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 
                      1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 
                      1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 
                      1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 
                      1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 
                      1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 
                      1, 1, 1, 0, 0, 1, 0, 0, 1, 1, 1, 1, 
                      1, 1, 1, 0, 0, 1, 0, 0, 1, 1, 1, 1, 
                      1, 1, 1, 0, 0, 1, 0, 0, 1, 1, 1, 1, 
                      1, 1, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 
                      1, 1, 0, 0, 0, 1, 1, 0, 0, 1, 1, 1, 
                      1, 1, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 
                      1, 1, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 
                      1, 1, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 
                      1, 1, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 
                      1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 
                      1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 
                      1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1, 1, 
                      1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 1, 
                      1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 1, 
                      1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
                      22, 12, 'A'};

    /*---Values for 'E'---*/  
      mask22x12 letterE = 
                   {{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
                      1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 
                      1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 
                      1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
                      1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
                      1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
                      1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
                      1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
                      1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
                      1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
                      1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 
                      1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 
                      1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
                      1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
                      1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
                      1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
                      1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
                      1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
                      1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
                      1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 
                      1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 
                      1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
                      22, 12, 'E'};
    
    /*---Values for 'G'---*/
      mask22x12 letterG = 
                  {{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
                     1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 
                     1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 
                     1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 
                     0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 
                     0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 
                     0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
                     0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
                     0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
                     0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
                     0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
                     0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 
                     0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 
                     0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 
                     0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 
                     0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 
                     0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 
                     0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 
                     0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 
                     1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 
                     1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 
                     1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1 },
                     22, 12, 'G'};

    /*---Values for 'T'---*/
      mask22x12 letterT = 
                   {{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
                      1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 
                      1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 
                      1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 
                      1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 
                      1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 
                      1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 
                      1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 
                      1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 
                      1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 
                      1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 
                      1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 
                      1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 
                      1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 
                      1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 
                      1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 
                      1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 
                      1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 
                      1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 
                      1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 
                      1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 
                      1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
                      22, 12, 'T'};

    /*---Values for 'U'---*/
      mask22x12 letterU = 
                   {{ 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1,
                      0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 
                      0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 
                      0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 
                      0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 
                      0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 
                      0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 
                      0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 
                      0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 
                      0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 
                      0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 
                      0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 
                      0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 
                      0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 
                      0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 
                      0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 
                      0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 
                      0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 
                      0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 
                      1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 
                      1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 
                      1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1 },
                      22, 12, 'U'};

    /*---Values for 'V'---*/
      mask22x12 letterV = 
                   {{ 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1,
                      0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 1, 
                      0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 1, 
                      1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 1, 
                      1, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 
                      1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 
                      1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 
                      1, 1, 0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 
                      1, 1, 0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 
                      1, 1, 0, 0, 0, 1, 1, 0, 0, 1, 1, 1, 
                      1, 1, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 
                      1, 1, 1, 0, 0, 1, 0, 0, 0, 1, 1, 1, 
                      1, 1, 1, 0, 0, 1, 0, 0, 0, 1, 1, 1, 
                      1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 
                      1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 
                      1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 
                      1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 
                      1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 
                      1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 
                      1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 
                      1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 
                      1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1 },
                      22, 12, 'V'};

