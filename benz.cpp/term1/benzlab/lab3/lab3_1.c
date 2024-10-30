#include<stdio.h>


int main()
{
    char name[200];
    char sex;

    printf("Please enter your name : ");
    scanf("%s",&name);
    printf("Please enter your gender \nMale enter M Female enter F : ");
    scanf(" %c",&sex);
    
    if (sex == 'M')
    {
        printf("Hello %s\n",name);
    }
    else if (sex == 'F')
    {
        printf("Hello %s\n",name);
    }
    
    return 0;

}

