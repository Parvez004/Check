#include<stdio.h>
int main()
{
    int num, i=0, sum=0;
    float avg;
    while (i<=6)
    {
        printf("Enter Numbers: ");
        scanf("%d", &num);
        sum= sum + num;
        i++;

    }
    
    avg= sum/6;
    printf("\nSum= %d\nAvg= %f", sum, avg);
    return 0;

}