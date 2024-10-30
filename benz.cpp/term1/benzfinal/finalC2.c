#include<stdio.h>

float salary,tax=0;

void onehundredthousond()
{
    tax = salary*0.05;
    printf("Your tax = %f",tax);
}

void fivehundredthousond()
{
    tax = salary*0.1;
    printf("Your tax = %f",tax);
}

void onemillion()
{
    tax = salary*0.2;
    printf("Your tax = %f",tax);
}

void fourmillion()
{
    tax = salary*0.3;
    printf("Your tax = %f",tax);
}

void morefourmillion()
{
    tax = salary*0.1;
    printf("%f",tax);
}

int main()
{
    printf("Input your salary : ");
    scanf("%f",&salary);
    if (salary >=0 && salary <100000)
    {
        onehundredthousond();
    }
    if (salary >=100000 && salary <500000)
    {
        fivehundredthousond();
    }
    if (salary >=500000 && salary <1000000)
    {
        onemillion();
    }
    if (salary >=1000000 && salary <4000000)
    {
        fourmillion();
    }
    if (salary >4000000)
    {
        morefourmillion();
    }

    return 0;
    
}