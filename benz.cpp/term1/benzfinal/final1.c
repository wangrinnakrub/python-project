#include<stdio.h>
int main()
{
    int num,e=0,o=0,sume=0,sumo=0;
    for (int i = 0; num != 0; i++)
    {
        printf("Enter number : ");
        scanf("%d",&num);
        if ((num%2)==0)
        {
            sume = sume + num;
            e++;
        }
        if ((num%2)==1)
        {
            sumo = sumo + num;
            o++;
        }
        
    }
    
    system("pause");

        printf("Even number = %d\nTotal even number = %d\n",e,sume);
        printf("Odd number = %d\nTotal odd number = %d",o,sumo);
    
}