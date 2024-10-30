#include<stdio.h>
int main()
{
    int n,m=2000000000,M=-2000000000,A;
    scanf("%d",&n);
    if (n >=1 && n <=1000)
    {
        for (int i = 1; i <= n; i++)
        {
            scanf("%d",&A);
            if (A>=M)
            {
                M = A;
            }
            if(A<=m)
            {
                m = A;
            }
        }
    }
    printf("%d\n%d",m,M);
    return 0;
}