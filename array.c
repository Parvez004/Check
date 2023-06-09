#include<stdio.h>
int main()
{
    int number[10];
    int sum=0;
    float avg;
    printf("Enter 10 integer numbers: ");
    for (int i = 0; i < 10; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &number[i]);
        sum += number[i];
    }
    avg = (float) sum/ 10;
    printf("\nAverage= %.2f", avg);
    return 0;
}