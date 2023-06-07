#include<stdio.h>
int main()
{
    int i, j, space;
    
    for ( i = 1; i <= 5; i++)
    {
        for ( space = 1; space <= 5-1; space++)
        {
            printf("     ");
        }
      for ( j = 1; j<=i; j++)
     { 
        printf("%d", j);
        if (j!=i)
      {
       printf("   ");
      }
      }
      
    printf("\n");    
    }
   return 0; 
}