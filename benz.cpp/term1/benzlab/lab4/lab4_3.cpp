#include <stdio.h>
int sum = 0;

plusnum(int x)
{
    if (x != -999)
    {
        sum = sum + x;
    }
}

inputnumloop(int y)
{
    for (int i = 1; y != -999; i++)
    {
        printf("Enter number : ");
        scanf("%d", &y);
        plusnum(y);
    }
}

main()
{
    int num;
    inputnumloop(num);
    printf("Total = %d", sum);
}