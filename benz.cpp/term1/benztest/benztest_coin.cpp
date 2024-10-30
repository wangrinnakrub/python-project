#include <iostream>

using namespace std;

main()
{
    /*ให้เขียนโปรแกรมรับค่าจำนวนเหรียญบาท เหรียญห้าบาท เหรียญสิบบาท 
    และแสดงผลออกมาเป็นจำนวนเงินทั้งหมด*/

    int num1 = 0, num5 = 0, num10 = 0, total = 0;

    cout << "Please enter your amount of 1 bath coin = ";
    cin >> num1;
    cout << "Please enter your amount of 5 bath coin = ";
    cin >> num5;
    cout << "Please enter your amount of 10 bath coin = ";
    cin >> num10;

    total = num1 + (5 * num5) + (10 * num10);
    cout << "Your total amount is " << total;

}