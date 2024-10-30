#include <stdio.h>

int main()
{
    float kg=0,pay=0;

    printf("Enter your kilometer : ");
    scanf("%f",&kg);

    if (kg > 0 && kg <= 350)
    {
        pay = kg * 5 ;
    }
    else if (kg > 350)
    {
        pay = (350 * 5) + ((kg-350) * 6.5);
    }
    
    printf("You must pay %.3f",pay);
    
    
    return 0;
}