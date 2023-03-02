#include <stdio.h>
int main()
{
    printf("************************************************************");
    printf("\n************************************************************");
    printf("\n**       WAP to find average of elements of an array      **");
    printf("\n**             Name - Shubham bisht                       **");
    printf("\n**             Class - BCA - CTIS                         **");
    printf("\n**             Roll no. - 22835                           **");
    printf("\n************************************************************");
    printf("\n************************************************************\n");
    int n,i,a[10];
    float sum=0,avg;
    printf("Enter no. of elements in the array");
    scanf("%d",&n);
    printf("enter array elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0; i<n; i++)
    sum=sum + a[i];
    avg=sum/n;
    printf("Average of elements of array is %f",avg);
    return 0;
}