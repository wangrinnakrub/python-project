#include <bits/stdc++.h>
using namespace std;
main()
{
    int hour = 0, cost = 0, cost1 = 0, cost2 = 0;
    char name[2][100], member[10], YES[10] = "YES", NO[10] = "NO";

    for (int i = 0; i <= 1; i++)
    {
        cost1 = cost;

        printf("Please enter your name : ");
        scanf("%s", &name[i]);

        printf("%s Please enter your membership YES or NO : ", name[i]);
        scanf("%s", &member);

        printf("Please enter your hour : ");
        scanf("%d", &hour);
        
        if (strcmp(member, YES) == 0)
        {
            cost = ((hour * 15) * (90.0 / 100)) + 100;
        }
        if (strcmp(member, NO) == 0)
        {
            cost = hour * 15;
        }

        printf("%s You have to pay %d baht\n\n", name[i], cost);

        cost2 = cost;
    }

    if (cost1 > cost2)
    {
        printf("%s pays more than %s", name[0], name[1]);
    }
    if (cost2 > cost1)
    {
        printf("%s pays more than %s", name[1], name[0]);
    }
    if (cost2 == cost1)
    {
        printf("%s pays equal to %s", name[0], name[1]);
    }
}