#include<stdio.h>
int main()
{
    int num,e=0;
    for (int i = 0; num != -1; i++)
    {
        printf("Enter number : ");
        scanf("%d",&num);
        if ((num%2)==0)
        {
            e++;
        }
    }
        system("pause");
        printf("Even number = %d",e);
    
}