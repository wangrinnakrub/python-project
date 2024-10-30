#include<stdio.h>
int maximum(int n1,int n2,int n3)
 {
    int max=0;
    if (n1>=n2&&n1>=n3)
    {
        max = n1;
    }
    else if (n2>=n1 && n2>=n3)
    {
        max = n2;
    }
    else if(n3>=n1 && n3>=n2)
    {
        max = n3;
    }
    printf("Maximum number is %d",max);
 }

 int main()
 {
    int f,s,t;
    printf("Enter your first number : ");
    scanf("%d",&f);
    printf("Enter your second number : ");
    scanf("%d",&s);
    printf("Enter your third number : ");
    scanf("%d",&t);
    
    maximum(f,s,t);
    
 }