#include <stdio.h>

main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 1)
        {
            printf("%d\n", i);
            continue;
        }
    }
}