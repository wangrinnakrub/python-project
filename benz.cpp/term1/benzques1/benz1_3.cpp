#include<iostream>
using namespace std;

main(){

    double x=0;
    double y=0;

    cout << "Please enter your temperature = ";
    cin >> x;

    y = (( x / 5 ) * 9) + 32 ;
    cout << x << " celcius = " << y << " farenheit" ;
    
}