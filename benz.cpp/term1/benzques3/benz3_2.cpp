#include <iostream>

using namespace std;

int main() {

    int num1=0;
    int num2=0;
    
    cout << "enter num1 : ";
    cin >> num1 ;
    
    cout << "enter num2 : "; 
    cin >> num2 ;
    
    if(num1 > num2)
    {        
        cout << num1;
    }
    else if(num2 > num1)
    {        
        cout << num2;
    }
    else
    {        
        cout << "num1 = num2" ;
    }
    
    return 0;

}