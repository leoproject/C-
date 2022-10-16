#include<iostream>
using namespace std;

void printNUmber(int* numberPtr){
    cout<<*numberPtr << endl;
}

void printLetter(char* letterPtr){
    cout<<*letterPtr << endl;
}
void print(void* ptr,char type){
   switch (type)
   {
    // handle int*
   case 'i':cout<<*((int*)ptr)<<endl; break;
    //handle char*
   case 'c':cout<<*((char*)ptr)<<endl; break;
   // handle double*
   case 'd':cout<<*((double*)ptr)<<endl; break;
   }
}

int main ()
{
    int number = 5;
    char letter = 'a';
    printLetter(&letter);
    printNUmber(&number);

    print(&letter,'c');
    print(&number,'i');
    
}