#include<iostream>
using namespace std;

int main()
{
    int luckyNUmbers[5] = {2,3,5,7,9};
    cout << luckyNUmbers << endl;
    cout << &luckyNUmbers[0] << endl;
    cout << luckyNUmbers[2] << endl;
    cout << *(luckyNUmbers+2) << endl;

    cout << "Print by for:" << endl;

    for (int i : luckyNUmbers)
    {
      cout << "Number: " << i << endl;
    }
    

    
}