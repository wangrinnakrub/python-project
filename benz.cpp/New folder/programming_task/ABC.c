#include <stdio.h>

int main()
{
    unsigned int A = 0, B = 0, C = 0, num[3], max = 0, mid = 0, min = 100;
    char ABC[4];

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &num[i]);
        if (num[i] >= max)
        {
            max = num[i];
        }
        if (num[i] <= min)
        {
            min = num[i];
        }
    }
    for (int j = 0; j < 3; j++)
    {
        if (num[j] > min && num[j] < max)
        {
            mid = num[j];
        }
    }

    scanf("%s", &ABC);
    for (int k = 0; k < 3; k++)
    {
        if (ABC[k] == 'A')
        {
            printf("%d", min);
        }
        if (ABC[k] == 'B')
        {
            printf("%d", mid);
        }
        if (ABC[k] == 'C')
        {
            printf("%d", max);
        }
        if (ABC[k] == ABC[2])
        {
            break;
        }

        printf(" ");
    }

    return 0;
}