#include<iostream>
using namespace std;

int main()
{
    float num1, num2;
    char operation;
    cout << "**Calculator**"<<endl;
    cin>>num1>>operation>>num2;

    switch (operation)
    {
    case '-':cout <<"Result of equation " << num1<<operation<<num2<<"="<< num1-num2<<endl;
        break;
    case '+':cout <<"Result of equation " << num1<<operation<<num2<<"="<< num1+num2<<endl;
       break;
    case '*':cout <<"Result of equation " << num1<<operation<<num2<<"="<< num1*num2<<endl;
       break;
    case '/':cout <<"Result of equation " << num1<<operation<<num2<<"="<< num1/num2<<endl;
       break;
    case '%':cout <<"Result of equation " << num1<<operation<<num2<<"="<< (int)num1 % (int)num2<<endl;
       break;
    
    default:
        break;
    }
    
}