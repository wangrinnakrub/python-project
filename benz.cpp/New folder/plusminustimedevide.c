#include <stdio.h>

int main()
{
    double num1=0,num2=0;
    char symbol;
    printf("Enter an operator (+, -, *, /) : ");
    scanf("%c",&symbol);  
    printf("Enter two numbers : ");
    scanf("%lf%lf",&num1,&num2);


    if (symbol == '+')
    {
        printf("%.2f + %.2f = %.2f",num1,num2,num1 + num2);
    }
    if (symbol == '-')
    {
        printf("%.2f - %.2f = %.2f",num1,num2,num1 - num2);
    }
    if (symbol == '*')
    {
        printf("%.2f * %.2f = %.2f",num1,num2,num1 * num2);
    }
    if (symbol == '/')
    {
        printf("%.2f / %.2f = %.2f",num1,num2,num1 / num2);
    }
    
    return 0;
}