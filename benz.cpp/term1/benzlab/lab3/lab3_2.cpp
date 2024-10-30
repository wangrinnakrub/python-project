#include<bits/stdc++.h>
#include<string>

using namespace std;

int main()
{
    float hour=0,pay=0;
    char code;

    printf("Enter your member code : ");
    scanf("%c",&code);

    printf("Enter hour : ");
    scanf("%f",&hour);

    if (code == 'A')
    {
        pay = hour * 100 ;
    }
    else if (code == 'B')
    {
        pay = hour * 150 ;
    }
    else if (code == 'C')
    {
        pay = hour * 200 ;
    }
    else if (code == 'D')
    {
        pay = hour * 250 ;
    }
    
    printf("Your wages are %.3f",pay);


    
    
    return 0;

}