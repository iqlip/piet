#include <stdio.h>
int main()
{
    int phy, chem, bio, math, comp;
    float per;
    printf("**********************************************************");
    printf("\n**********************************************************");
    printf("\n**WAP to find total percentage & grade of a student in C**");
    printf("\n**            Name - shubham bisht                      **");
    printf("\n**            Class - BCA-CTIS                          **");
    printf("\n**            Roll no. - 22835                          **");
    printf("\n**********************************************************");
    printf("\n**********************************************************");
    /* Input marks of five subjects from user */
    printf("\nEnter five subjects marks: ");
    scanf("%d%d%d%d%d", &phy, &chem, &bio, &math, &comp);
    /* Calculate percentage */
    per = (phy + chem + bio + math + comp) / 5.0;
    printf("Percentage = %.2f\n", per);
    /* Find grade according to the percentage */
    if (per >= 90)
    {
        printf("Grade A");
    }
    else if (per >= 80)
    {
        printf("Grade B");
    }
    else if (per >= 70)
    {
        printf("Grade C");
    }
    else if (per >= 60)
    {
        printf("Grade D");
    }
    else if (per >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
    return 0;
}