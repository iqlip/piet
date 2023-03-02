#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("enter any number :");
    scanf("%d",&a);
    while(a>0)
    {
        b=a%10;
        sum=sum+b;
        a=a/10;
    }
    printf("sum of digits :",sum);
    return 0;
}