#include <stdio.h>

int main()
{

    //ให้เขียนโปรแกรมสูตรคูณแม่ 10 โดยใช้  while loop , do...while loop , for loop

    for (int i = 1; i < 13; i++)
    {
        printf("%d x 10 = %d\n", i, i * 10);
    }

    printf("\n");

    int j = 1;
    while (j <= 12)
    {
        printf("%d x 10 = %d\n", j, j * 10);
        j++;
    }

    printf("\n");

    int x = 1;
    do
    {
        printf("%d x 10 = %d\n", x, x * 10);
        x++;
    } while (x <= 12);

    return 0;

}
