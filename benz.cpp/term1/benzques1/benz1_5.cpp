#include <iostream>

int main()
{

    int x = 0;
    int y = 0;

    printf("Please enter your hour = ");
    scanf("%d",&x);

    y = 320 + ((x - 8) * 7);

    if (x <= 8 && x >= 0)
    {
        printf("You get "  (x * 40)  " THB");
    }
    else if (x > 8)
    {
        printf("You get "  (y)  " THB");
    }
    else
    {
        printf("Your hour is not correct");
    }

    return 0;
}