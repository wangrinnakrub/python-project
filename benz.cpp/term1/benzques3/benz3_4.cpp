#include<iostream>

using namespace std;

int main() {

    int orange=0;

    cout << "Please enter your orange = ";
    cin >> orange;

    if( orange >= 1 && orange <= 5 )
    {
        cout << "You have to pay = " << orange * 35 ;
    }
    else if( orange > 5)
    {
        cout << "You have to pay = " << orange * 30 ;
    }
    else
    {
        cout << "Your orange is - ";
    }
    
    return 0;
}