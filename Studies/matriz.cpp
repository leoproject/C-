#include<iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Rows, cols:";
    cin >> rows >> cols;

    int** table = new int*[rows];
    for (int i = 0; i < rows; i++)
    {
      table[i] = new int[cols];
    }

    table[1][2]=88;
    


}