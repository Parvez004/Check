#include<stdio.h>
int main()
{
    int n, sum;
    printf("Enter n: ");
    scanf("%d", &n);
    sum= (n/2)*(2*1 + ((n-1)*3));
    printf("\nSum= %d", sum);
    return 0;
}