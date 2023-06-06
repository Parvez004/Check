#include<stdio.h>
int main()
{
    int n1=5,n2=4,n3=10;
    if (n1<=10 && n3>=20)
    {
        n1=n1+n3;
        printf("The value is=%d%d", n1,n3);
    }
    else
    {
        n1=n3-n2;
        printf("The value is=%d%d", n1,n3);
    }
    return 0;
}