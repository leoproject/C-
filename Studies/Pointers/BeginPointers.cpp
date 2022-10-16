#include<iostream>
using namespace std;

int main()
{
    int n = 5;
    // this variable value 
    cout << n << endl;
    // this address of varible
    cout << &n << endl;
    // if you want save address 
    int* ptr = &n;
    cout << ptr << endl;
    cout << *ptr << endl;
    // how you can input value by pointer
    *ptr = 10;
    cout << n << endl;
    
    int v;
    int* ptr2=&v;
    *ptr2 = 7;
    cout << "v="<< v << endl;



    // system("pause>0");
    return 0;
}