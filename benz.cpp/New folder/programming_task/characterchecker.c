#include<stdio.h>
#include<string.h>
int main()
{
    int A=0,a=0,z=0;
    char word[10000];
    char small[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char big[]="abcdefghijklmnopqrstuvwxyz";

    scanf("%s",&word);
    z = strlen(word);
    for (int i = 0; i < z; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (word[i] == small[j])
            {
                a++;
            }
            else if (word[i] == big[j])
            {
                A++;
            }
        }
    }
        
        if (a>0&&A>0)
        {
            printf("Mix");
        }
        else if (a>0)
        {
            printf("All Capital Letter");
        }
        else if (A>0)
        {
            printf("All Small Letter");
        }
        return 0;
}