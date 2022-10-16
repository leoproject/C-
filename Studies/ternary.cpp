#include<iostream>
using namespace std;

int main()
{
    float age,her_age;
    cout << "Please enter your age:";
    cin >> age;
    cout << "Please enter her age:";
    cin >> her_age;

    (age>her_age)? cout << "You're older than her": cout << "She's older than you."<<endl;

}