//Pongsatorn Thammakul 663040202-6 Sec
#include <iostream>

using namespace std;

const int rowmax = 10;
const int colmax = 10;
void add(int a[rowmax][colmax], int b[rowmax][colmax], int row, int col);
//void subtract(int a[rowmax][colmax], int b[rowmax][colmax], int row, int col);

int main()
{
    int row, col;
    cout << "Enter matrix sizes: ";
    cin >> row >> col;
    int A[rowmax][colmax], B[rowmax][colmax];

    cout << "Enter matrix A:" << endl;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cin >> A[i][j];
        }
    }

    cout << "Enter matrix B:" << endl;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cin >> B[i][j];
        }
    }

    add(A,B,row,col);
    //subtract(A,B,row,col);

    return 0;
}

void add(int a[rowmax][colmax], int b[rowmax][colmax], int row, int col)
{
    cout << "A+B:" << endl;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << a[i][j] + b[i][j] << " ";
        }
        cout << endl;
    }
}

void subtract(int a[rowmax][colmax], int b[rowmax][colmax], int row, int col)
{
    cout << "A-B:" << endl;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << a[i][j] - b[i][j] << " ";
        }
        cout << endl;
    }
}
