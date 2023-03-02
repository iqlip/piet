#include<stdio.h>
int main()
{
    int a,b,c,max,min;
    printf("************************************************************");
    printf("\n************************************************************");
    printf("\n** WAP to find maximum and minimum of three numbers in C  **");
    printf("\n**             using if else if laddar                    **");
    printf("\n**              Name - shubham bisht                      **");
    printf("\n**              Class - BCA-CTIS                          **");
    printf("\n**              Roll no. - 22835                          **");
    printf("\n************************************************************");
    printf("\n************************************************************");
    printf("\nenter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    max=a;
    else if (b>a && b>c)
    max=b;
    else if (c>a && c>b)
    max=c;
    printf("maximum is %d",max);
    if(a<b && a<c)
    min=a;
    else if (b<a && b<c)
    min=b;
    else if (c<a && c<b)
    min=c;
    printf("\nminimum is %d",min);
    return 0;
}