#include <iostream>

using namespace std;

int main() {
    
    int number=0;

    for (int i = 1; i <= 10; i++) 
    {
        cout << "Enter number = "; 

        if (number>50)
        {
            cout << "Your number is " << number << "\n" << "\n";
        }
        else 
        {
            cout << "Your number is below or equal 50 " << "\n" << "\n";
        }        
    }
     
    
    return 0;
}