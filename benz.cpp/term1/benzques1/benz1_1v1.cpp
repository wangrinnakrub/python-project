#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3, max;

    cout << "Enter The Three Numbers \n";
    cin >> num1 >> num2 >> num3;

    max = num1;

    if (num2 > max)
    {
        max = num2;
    }
    if (num3 > max)
    {
        max = num3;
    }
    cout << "\nThe Greatest Number is " << max;
}