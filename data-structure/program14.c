#include <stdio.h>
int main()
{
printf("*************************************************");
printf("\n*************************************************");
printf("\n**  WAP to check whether a number is even/odd  **");
printf("\n**              using if else                  **");
printf("\n**          Name - shubham bisht               **");
printf("\n**          Class - BCA-CTIS                   **");
printf("\n**          Roll no. - 22835                   **");
printf("\n*************************************************");
printf("\n*************************************************\n");
int num;
printf("Enter an integer: ");
scanf("%d", &num);
// true if num is perfectly divisible by 2
if (num % 2 == 0)
printf("%d is even.", num);
else
printf("%d is odd.", num);
return 0;
}