#include<stdio.h>
int main()
{

int n,i,a[5],item;
    printf("\nEnter no. of elements in the array\n");
    scanf("%d",&n);
    printf("enter array elemnents");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the item to search");
    scanf("%d",&item);
    for(i=0;i<n;i++)
    if(item==a[i])
    {
    printf("item found at location %d",i+1);
    break;
    }
    if(i==n)
    printf("item not found ");
return 0;
}