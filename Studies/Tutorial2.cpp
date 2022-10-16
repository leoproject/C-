#include<iostream>
using namespace std;

int main()
{
    float annualSalary; 
    cout << "Please enter your annual salary:";
    cin >> annualSalary; 

    float moanthlySalary = annualSalary / 12;
    cout << "Your monthly salary is " << moanthlySalary<<endl; 
    cout << "In 10 years you will earn "<< annualSalary*10 << endl;


    char character = 'a';

    
    cout << "Press Enter to finish..." <<endl;
    getchar();
    // system("read -p 'Press Enter to continue...' var");

}
