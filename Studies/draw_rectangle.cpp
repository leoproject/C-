#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int height, width;
    cout << "Please enter height:";
    cin >> height;
    cout << "Please enter width:";
    cin >> width;
    char symbol;
    cout << "Please enter symbol:";
    cin >> symbol;
    cout << "Your rectangle draw in bellow:\n";

    for(int h=0; h < height; h++){
        for(int w=0; w < width; w ++){
            cout << setw(3) << symbol;
        }
        cout << endl;
    }

}