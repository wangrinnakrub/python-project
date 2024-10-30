#include <iostream>

using namespace std;

int main(){
    
    int num1;
    int num2;

    
    cout << "First number = ";
    cin >> num1;
    cout << "Secound number = ";
    cin >> num2;


    cout << "The lowest is ";  
    cout << min(num1, num2);
       
    
    return 0;

}