#include<stdio.h>
int main()
{
	int i,j;
	char str[20];
	printf("Enter a string :");
	scanf("%[^\n]",str);
	for( i=0;str[i]!='\0';i++)
	{
		for( j=0;j<=i;j++)
		{
			printf("%c",str[j]);
		}
		printf("\n");
	}
	return 0;
}
