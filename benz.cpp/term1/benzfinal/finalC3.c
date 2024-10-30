#include<stdio.h>
int main()
{
    int A=45,B=22,C=11;
    if (A==B)
    {
        A = B % C;
        C = B - A;
    }
    else if (A==C)
    {
        A = B - C;
        A = A + B * C;
    }
    else
    {
        C = A + B;
        B = C % A;
        C = A / C;
    }
    printf("A = %d\nB = %d\nC = %d",A,B,C);
    
    return 0;
    
}