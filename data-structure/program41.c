#include <stdio.h>
int main()
{
    printf("**************************************************************");
    printf("\n**************************************************************");
    printf("\n**       WAP to enter and display an array                  **");
    printf("\n**             Name - Shubham bisht                         **");
    printf("\n**               Class -  BCA-CTIS                          **");
    printf("\n**                Roll no.- 22835                           **");
    printf("\n**************************************************************");
    printf("\n**************************************************************\n");
    int n,i,a[10];
    printf("Enter no. of elements in the array: ");
    scanf("%d",&n);
    printf("enter array elements: ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\nThe array elements are: ");
    for(i=0; i<n; i++)
    printf("%d\n",a[i]);
    return 0;
} 