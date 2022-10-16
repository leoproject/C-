#include<iostream>
using namespace std;

int main()
{
    int yearOfBirth = 1995;
    char gender = 'f';
    bool isOlderThan18 = true;
    float averageGrad = 4.5;
    double balance = 45679845335;

    cout << "Size of int is "<<sizeof(int)<< " bytes\n";
    cout << "Int min value is "<<INT64_MIN<< endl;
    cout << "Int max value is "<<INT64_MAX<< endl;


    cout << "Size of int is "<<sizeof(unsigned int)<< " bytes\n";
    cout << "Size of char is "<<sizeof(char)<< " bytes\n";
    cout << "Size of bool is "<<sizeof(bool)<< " bytes\n";
    cout << "Size of float is "<<sizeof(float)<< " bytes\n";
    cout << "Size of double is "<<sizeof(double)<< " bytes\n";

    
    
}