#include <stdio.h>

int main()
{
    int arr[10],avg = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter score student %d : ",i+1);
        scanf("%d",&arr[i]);
        avg = avg + arr[i];
    }
    printf("Average = %d",avg/10);
    
}