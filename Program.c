#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[10];
    char country[15];
    int age;
    char skill;
    
    printf("Welcome to Hacktoberfest 2020\n");
    printf("Enter your name : ");//Get User name
    scanf("%s",&name);
    printf("Enter your Country of Residance : ");//Get user country
    scanf("%s",&country);
    printf("Enter your Age : ");//Get user Age
    printf("%d",&age);
    printf("Rate your programmings skills from A-D (A being the highest and D being the lowest : ");//Get user skill level
    scanf(" %c",&skill);
    scanf("Thank you, "%s" Happy Hacking "%s"",name,country);//Thank the user

    return 0;
}
