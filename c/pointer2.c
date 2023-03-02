#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5]={7,9,-8,-5,1};
    int *p = &a[0];
    printf("value is : %d\n",*p);
    printf("address of element is : %d\n",p);
    p=p+1;
  // *p=2;
    printf("value is : %d\n",*p);
    return 0;
    
}