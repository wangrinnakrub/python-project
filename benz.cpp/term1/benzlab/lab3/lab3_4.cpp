#include <stdio.h>

int main()
{
    int product,pay=0;

    printf("Enter your product : ");
    scanf("%d",&product);

    if (product > 0 && product <= 10)
    {
        pay = product*50;
    }
    if (product > 10)
    {
        pay = product*45;
    }
    if (product > 100)
    {
        pay = product*40;
    }
    if (product > 1000)
    {
        pay = product*30;
    }

    printf("You must pay %d",pay);
    
    
    return 0;
}