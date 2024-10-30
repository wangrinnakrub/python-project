#include <iostream>
using namespace std;

int main()
{
    int sum = 0;

    for (int i = 2; i < 50; i++)
    {
        sum = sum + i;
    }
    cout << sum;

    return 0;
}