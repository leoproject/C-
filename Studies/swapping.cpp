#include<iostream>
using namespace std;

int main()
{
    int a = 20;
    int b = 10;

    int temp = a;
    a = b;
    b = temp;

    cout << "a = "<< a << " b = " << b << endl;

    // the same thing without temporary varible 
    int c = 40;
    int d = 30;

    c = c + d;//70
    d = c - d;//40
    c = c - d;//30

    cout << "Result without temporary varible c = "<< c << " d = " << d << endl;






}