#include <iostream>

using namespace std;

int main()
{

    int array[100];

    for (int j = 0; j < 5; j++)
    {
        cin >> array[j];
    }
    cout << "array is ";
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }

    system("pause");

    const int MAX_ARRAY = 10;
    int array_data[MAX_ARRAY];
    int i;

    for (i = 0; i < MAX_ARRAY; i++)
    {
        cout << "Enter Data Index (" << i << ") : ";
        cin >> array_data[i];
    }

    cout << endl << endl;
         
    system("pause");

    return 0;
}