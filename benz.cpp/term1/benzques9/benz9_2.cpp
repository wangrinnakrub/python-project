#include <iostream>
using namespace std;
int main()
{
    int num1, num2;

    cout << "Enter num1 = ";
    cin >> num1;

    cout << "Enter num2 = ";
    cin >> num2;

    if (num2 != 0)
    {
        cout << num1 / num2;
    }

    return 0;
}