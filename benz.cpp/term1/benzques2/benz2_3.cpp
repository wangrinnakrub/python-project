#include <iostream>

using namespace std;

int main() {

    
    int age;


    cout << "Enter your age = ";
    cin >> age;


   if( age > 10)
   {
      cout << "Eat 2 teaspoons each time";
   }
   else if( age > 3 && age <= 10 )
   {
      cout << "Eat 1 teaspoons each time";
   }
   else if( age >= 1 && age <= 3 )
   {
      cout << "Eat 1/2 teaspoons each time";
   }
   else
   {
      cout << "Dont eat";
   } 
        
    
    return 0;

}
