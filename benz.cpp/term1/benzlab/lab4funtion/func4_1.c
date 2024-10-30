#include<stdio.h>

float volume(float s1,float s2,float s3)
{
    printf("Area is %f",s1*s2*s3);
}
int main()
{
    float s1=0,s2=0,s3=0;
        printf("Input your first side : ");
        scanf("%f",&s1);
        printf("Input your second side : ");
        scanf("%f",&s2);
        printf("Input your third side : ");
        scanf("%f",&s3);
    volume(s1,s2,s3);
    return 0;
}