#include <stdio.h>

main()
{
    int sum = 0;
    for (int i = 5; i <= 100; i = i + 5)
    {
        sum += i;
    }
    printf("%d", sum);
}