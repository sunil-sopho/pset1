 // programer sunil
 // dated oct 1
#include <stdio.h>
#include <cs50.h>
int main(void)
{
 // label is a specified location    
    label1:
        printf ("height: ");
    int k=0, i=0, j=0, high = GetInt();
    if (high < 0 || high > 23)
    {
        // help to jump back
        goto label1;
        
    }
    for(i = 0;i < high; i++)
    {
        for(j = 0; j < high - i - 1; j++)
        {
            // prints
            printf (" ");
            
        }
        for(k = 0; k < i + 2;k = k + 1)
        {
            printf ("#");
            
        }
        printf ("\n");
    }
    
}