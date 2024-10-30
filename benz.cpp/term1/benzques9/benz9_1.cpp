#include <iostream>

using namespace std;

int main()
{

    int num1,num2,sum;
    char symbol;

    cout << "Enter num1 = ";
    cin >> num1;

    cout << "Enter num2 = ";
    cin >> num2;

    cout << "Please select + or - or x or / = ";
    cin >> symbol;

    switch (symbol)
    {

    case '+':

        cout << num1 + num2;
        break;

    case '-':

        cout << num1 - num2;
        break;

    case 'x':

        cout << num1 * num2;
        break;

    case '/':

        cout << num1 / num2;
        break;

    default:

        cout << "You don't choose + or -or x or / ";
        break;
    }

    return 0;
}