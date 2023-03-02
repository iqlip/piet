#include<stdio.h>
int main()
{
    int a;
    int *p=&a;
    int **x= &p;
    printf("value of a is :");
    scanf("%d\n",&a);
    printf("a is %d\n",a);
    printf("a is %d\n is",*p);
    printf("a is %d\n is",*(*x));
    return 0; 
}