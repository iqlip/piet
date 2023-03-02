#include <stdio.h>
int main()
{
    printf("***********************************************************");
    printf("\n************************************************************");
    printf("\n**     WAP to find Product of elements of an array        **");
    printf("\n**           Name - Shubham bisht                         **");
    printf("\n**           Class - BCA - CTIS                           **");
    printf("\n**           Roll no. - 22835                             **");
    printf("\n************************************************************");
    printf("\n************************************************************\n");
    int n,i,a[5],prod=1;
    printf("Enter no. of elements in the array :");
    scanf("%d",&n);
    printf("enter array elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0; i<n; i++)
    prod=prod * a[i];
    printf("Product of elements of array is %d",prod);
    return 0;
}