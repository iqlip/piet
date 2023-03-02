#include <stdio.h>
int main()
{
    printf("**************************************************************");
    printf("\n**************************************************************");
    printf("\n**       WAP to find sum of elements of an array            **");
    printf("\n**               Name - Shubham bisht                       **");
    printf("\n**               Class - BCA - CTIS                         **");
    printf("\n**                Roll no. - 22835                          **");
    printf("\n**************************************************************");
    printf("\n**************************************************************\n");
    int n,i,a[10],sum=0;
    printf("Enter no. of elements in the array\n");
    scanf("%d",&n);
    printf("enter array elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0; i<n; i++)
    sum=sum + a[i];
    printf("sum of elements of array is %d",sum);
    return 0;
}