#include<iostream>
using namespace std;

int main()
{
    // Program should write out whether that triangle is equiteral, isoscles or scalene
    float a,b,c;
    cout << "Please enter sides values from triangle:";
    cin >> a >> b >> c;

    if((a==b) && (c==a))
    {
        cout << "The triangle is equiteral."<<endl;

    } 
    else if ((a!=b) && (c!=a))
    {
        cout << "The triangle is scalene."<<endl;
    }
    else
    {
        cout << "The triangle is isoscles."<<endl;
    }
}