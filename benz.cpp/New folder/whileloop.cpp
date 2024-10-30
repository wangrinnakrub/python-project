#include<iostream>

using namespace std;

int main(){

    int x;
    int i = 0;
    int n;
    
    do
    {
        printf("Enter number = ");
        scanf("%d",&n);

        printf("Your number is %d naja \n",n);
    } while ( n != 1);

    printf("GAME OVER");
    
    cout << "cin >> x = ";
    cin >> x;

    while ( i < x )
    {
        cout << x << "\n";
        i++ ;
    }
    
    return 0;
}