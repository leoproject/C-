#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    // BMI calculator 
    // weight(kg)/ height * height(m)
    // UNderweight < 18.5
    // Normal weight 18.5 - 24.9
    // Overweight > 25

    float weight, height;
    double imc;

    cout << "Please enter your weight (kgs):";
    cin >> weight;
    cout << "Please enter your height (m):";
    cin >> height;

    imc = weight/pow(height,2);

    if (imc<18.5)
    {
        cout << " Your BMI is " << imc << ". You're underweight, be careful!"<<endl;
    }
    else if ((imc>=18.5) && (imc <=24.9))
    {
        cout << " It's Ok, you have a BMI  " << imc << "."<<endl;
    }
    else {
        cout << " Oh Godness, your BMI is  " << imc << ". You should looking for doctor now."<<endl;
    }
}