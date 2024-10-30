#include <bits/stdc++.h>

int main()
{
    int num1,num2;
    char symbol;
    printf("Enter first number : ");
    scanf("%d",&num1);  
    printf("Enter Secound number : ");
    scanf("%d",&num2);
    printf("Enter symbol : ");
    scanf(" %c",&symbol);

    if (symbol == '+')
    {
        printf("%d",num1 + num2);
    }
    else if (symbol == '-')
    {
        printf("%d",num1 - num2);
    }
    else if (symbol == 'x')
    {
        printf("%d",num1 * num2);
    }
    else if (symbol == '/')
    {
        printf("%d",num1 / num2);
    }
      
    
    return 0;
}