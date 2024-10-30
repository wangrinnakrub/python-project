#include<stdio.h>

main()
{
    int k,j;

    printf("Enter number : ");
    scanf("%d",&k);
    printf("Enter round : ");
    scanf("%d",&j);

    for (int l = 1; l <= j; l++)
    {
        printf("%d x %d = %d\n",k,l,l*k);
    }
    

}