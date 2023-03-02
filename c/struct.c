#include<stdio.h>
#include<string.h>


struct student 
{
    char name[10];
    int age;
    char gender;
};


int main()
{
    struct student s1;

    strcpy(s1.name,"kunal");

    s1.age = 18;
    s1.gender = 'M';

    printf("name : %s\n",s1.name);
    printf("age : %d\n",s1.age);
    printf("gender : %c\n", s1.gender);
    
    return 0;
}