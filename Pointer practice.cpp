#include<iostream>

using namespace std;

void sum(int *x);

int main()
{
    int a = 10;
    int *ptr ;

    ptr = &a ;
    cout << a << endl;
    cout << ptr << endl;
    cout << *ptr <<endl ;
     *ptr = 50 ;
      cout << *ptr <<endl ;
    cout << &ptr <<endl ;
    int **ptr1;
    ptr1 = &ptr ;
    cout << **ptr1 << endl;


    return 0;
}


void sum(int *x)
{

}

