#include<iostream>

using namespace std;

int main() {

    int number=0;
    int i=0;

    cout << "Please enter your number = ";
    cin >> number;

    for(i = 0; i <= 1000; i+number)
    {
        i = i + number;
    }
    
    cout << i ;

    return 0;
}