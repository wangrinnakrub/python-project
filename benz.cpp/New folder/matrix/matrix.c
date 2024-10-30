#include <stdio.h>

int x = 0, y = 0, i = 0, j = 0;
void readmatrix(int a[100][100])
{
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

void plusmatrix(int a[100][100], int b[100][100])
{
    for (i = 0; i < x; ++i)
    {
        for (j = 0; j < y; ++j)
        {
            printf("%d ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int m[100][100], M[100][100];
    scanf("%d %d", &x, &y);
    readmatrix(m);
    readmatrix(M);
    plusmatrix(m, M);
}