 // program by sunil
 // dated oct 1
 // **
 // **
 
#include <stdio.h>
#include <math.h>
#include <cs50.h>
int main(void)
{ 
    label1:

        printf("O hai! How much change is owed?"); 
     // getting a float value
    float curren = GetFloat();
    if (curren <= 0)
    {
        // jumping back to label1
        goto label1;
        
    }
    // declaring float and int 
    float big;
    int roun=0, ethen = 1, count = 0;
    big = curren * 100;
    // rounding c

    roun = roundl(big);
    
     // c=(int)b;
     // printf("%d\n",c);

    while (ethen != 0)
    {
        ethen = roun / 25;
        if (ethen == 0)
        {
             
            break;
        }    
 // incresing count
        count = count + ethen;
        roun = roun % 25;
       
   }
    ethen = 1;
 // starting while loop     
    while (ethen != 0)
    {
        ethen = roun / 10;
        if (ethen == 0)
        {    
            break;
        }   
        count = count + ethen;
      
        roun = roun % 10;
       
    }
    ethen = 1;
 // again using loop    
    while (ethen != 0)
    {
        ethen = roun / 5;
        
        if (ethen == 0)
        {
            break;
        }
        count = count + ethen;
        roun = roun % 5;
       
   }
    ethen = 1;
    while (ethen != 0)
    {
        ethen = roun / 1;
        if (ethen == 0)
        {
            break;
        }
        count = count + ethen;
        roun = roun % 1;
       
    }
    printf ("%d\n",count);
    
}
   