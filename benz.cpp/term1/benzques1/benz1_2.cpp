#include <iostream>

using namespace std;

int main()
{

    int num1, num2;
    int total;
    char a;

    cout << "first number = ";
    cin >> num1;
    cout << "Second number = ";
    cin >> num2;

    while (true)
    {
        cout << "Please select + or - or x = ";
        cin >> a;

        if (a == '+')
        {
            total = num1 + num2;
            cout << "" << num1 << " + " << num2 << " = " << total;
            break;
        }
        else if (a == '-')
        {
            total = num1 - num2;
            cout << num1 << " - " << num2 << " = " << total;
            break;
        }
        else if (a == 'x')
        {
            total = num1 * num2;
            cout << num1 << " x " << num2 << " = " << total;
            break;
        }
        else
        {
            cout << "Please select again \n";
            system("pause");
        }
    }

    return 0;
}