#include <stdio.h>
int main()
{
    printf("****************************************************");
    printf("\n****************************************************");
    printf("\n**       WAP to enter and display a 2D array      **");
    printf("\n**            Name - shubham bisht                **");
    printf("\n**            Class - BCA-CTIS                    **");
    printf("\n**            Roll no. - 22835                    **");
    printf("\n****************************************************");
    printf("\n****************************************************\n");
    int m, n, i, j, a[5][5];
    printf("Enter no. of rows and columns in the array\n");
    scanf("%d%d", &m, &n);
    printf("enter array elements");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    printf("\nThe array elements are\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d\t", a[i][j]);
            printf("\n");
    }
    return 0;
}