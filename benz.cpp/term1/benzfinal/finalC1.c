#include<stdio.h>
int main()
{
    char name[11][1000];
    int last,pass=0;
    
    for (int i = 1; i <=10; i++)
    {
        printf("Name : ");
        scanf("%s%d",&name[i],&last);
        if(last == 1)
        {
            pass++ ;
        }
    }
    if (pass > 8)
    {
        printf("Raise tuition");
    }

    return 0;
}
