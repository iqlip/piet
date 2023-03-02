#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    int *p = &a;
    int **q = &p;
    printf("enter the value :");
    scanf("%d",&a);
    printf("a is :%d\n",a);
    printf("a is :%d\n",*p);
    printf("a is :%d\n",*(*q));
    return 0;

}