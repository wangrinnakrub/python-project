#include <iostream>

using namespace std;

int main() {
    
    int student = 0 , score = 0;

    cout << "Enter your student = ";
    cin >> student; cout << "\n";
    
    for (int i = 1; i <= student; i++)
    {
        cout << "Enter score student " << i << " = "; 
        cin >> score; 

        if (score >= 90 && score <= 100)
        {
            cout << "Score " << score << " You got grade A \n\n";
        }
        else if (score >= 70 && score < 90) 
        {    
            cout << "Score " << score << " You got grade B \n\n";
        }
        else if (score >= 60 && score < 70)
        {
            cout << "Score " << score << " You got grade C \n\n";
        }
        else if (score >= 50 && score < 60)
        {
            cout << "Score " << score << " You got grade D \n\n";
        }
        else if(score >= 1 && score < 50)
        {
            cout << "Score " << score << " You got grade F \n\n";
        }
        else 
        {
        cout << "Your score not in 1 - 100 \n\n";
        }
    }
    
    return 0;
}