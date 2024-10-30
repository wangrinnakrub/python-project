#include<iostream>
#include<iomanip>

using namespace std;

int main()
{

    for ( int i = 2; i <= 12; i++)
    {
        for( int j =1; j<= 12; j++ )
        {
            cout<< i << " * " << j << " = " << i*j << "\n";
        }
    } 

    return 0;

}