#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c;
    scanf("%lf %lf",&a,&b);

    a=a*a;
    b=b*b;
    c=a+b;

    printf("%lf",(sqrt(c)));
}