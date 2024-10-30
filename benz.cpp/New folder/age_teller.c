#include<stdio.h>

int main()
{
    int age=0;
    
    printf("Please enter your age : ");
    scanf("%d",&age);
    if(age > 63)
    {
        printf("วัยชรา");
    }
    else if(age>19)
    {
        printf("วัยทำงาน");
    }
    else if(age>12)
    {
        printf("วัยรุ่น");
    }
    else if(age>2)
    {
        printf("เด็ก");
    }
    else if(age>=0 && age<3)
    {
        printf("ทารก");
    }
    else
    {
        printf("\n");
    }

    return 0;


}