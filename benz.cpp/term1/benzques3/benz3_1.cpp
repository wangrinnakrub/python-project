#include<iostream>

using namespace std;

int main() {

    

    int number=0;
    int numbers=0;
    int sum=0;

    cout << "Please enter your numbers = ";
    cin >> numbers;

    for (int i = 1; i <= numbers; i++)
    {
        cout << "Number" << i << " = " ;
        cin >> number;
        sum = sum + number;
    }
    
    cout << sum ;

    return 0;

}