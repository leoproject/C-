#include<iostream>
using namespace std;

int recursive_sum(int m , int n)
{
    if (m==n)
       return m;
    return m + recursive_sum(m+1,n);
    
}
// Sum numbers between m-n
int main()
{
    int m=2, n=4;

    cout << "Sum = " << recursive_sum(m,n) << endl;
    

    // int sum = 0 ;
    // for (int i = m; i <= n; i++)
    // {
    //     sum += i;
    // }
    // cout << "Sum = "<<sum<<endl;
    


}