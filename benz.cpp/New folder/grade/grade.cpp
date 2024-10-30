#include <bits/stdc++.h>

using namespace std;

main()
{

    int sub1;
    int sub2;
    int sub3;
    int sub4;

    cout << "Enter your point sub1 = ";
    cin >> sub1;
    cout << "\n";
    cout << "Enter your point sub2 = ";
    cin >> sub2;
    cout << "\n";
    cout << "Enter your point sub3 = ";
    cin >> sub3;
    cout << "\n";
    cout << "Enter your point sub4 = ";
    cin >> sub4;
    cout << "\n";

    int total = sub1 + sub2 + sub3 + sub4;

    cout << "Your point = " << total << "\n";

    if (total >= 80 && total <= 100)
    {
        cout << "Your grade is A\n";
    }
    else if (total >= 70 && total < 80)
    {
        cout << "Your grade is B\n";
    }
    else if (total >= 60 && total < 70)
    {
        cout << "Your grade is C\n";
    }
    else if (total >= 50 && total < 60)
    {
        cout << "Your grade is D\n";
    }
    else if (total >= 0 && total < 50)
    {
        cout << "Your grade is F\n";
    }
    else
    {
        cout << "Your point is not correct";
    }

    system("pause");
}