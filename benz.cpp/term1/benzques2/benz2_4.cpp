#include<iostream>

using namespace std;

int main() {
         
    //ให้เขียนโปรแกรมหาค่าเฉลี่ยคะแนนของนักเรียน
         
    int student=0;
    int score=0;
    int sum=0;  
    int average=0;

    
    cout << "Please enter your student = ";
    cin >> student;

    for (int i = 1; i <= student; i++)
    {
        cout << "Point student " << i << " = " ;
        cin >> score;
        sum = sum + score;        
    }
    
    average = sum / student;

    cout << "Total score = " << sum << "\n";
    cout << "Your average student score = " << average;

    
    
    return 0;

}