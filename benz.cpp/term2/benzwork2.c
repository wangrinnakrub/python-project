#include <stdio.h>
int main()
{
    int arr[3][5] = {{84, 71, 96, 65, 79}, {90, 55, 83, 68, 96}, {61, 77, 82, 94, 59}};
    float avg = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            avg += arr[i][j];
        }

        printf("Average score of %dst test = %.1f\n", i + 1, avg / 5);
        avg = avg * 0;
    }
}