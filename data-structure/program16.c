#include <stdio.h>
int main()
{
float celcius, f;
int ch;
printf("enter choice");
scanf("%d", &ch);
if (ch == 1)
{
printf("enter the value of temperature in Celcius\n");
scanf("%f", &celcius);
f = (celcius * 9 / 5) + 32;
printf("the value of temperature in fahrenheit is %f", f);
}
else
{
printf("enter the value of temperature in fahrenheit\n");
scanf("%f", &f);
celcius = (f - 32) * 5 / 9;
printf("the value of temperature in celcius is %f", celcius);
}
return 0;
}