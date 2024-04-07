#include<iostream>
#include<stack>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;

 int fact(int x){
     if(x == 0 | x == 1 ){

    return 1;
 }
 return x*fact(x-1);
 }

int main()
{
    stack < int > stkIn ;
    stack < int > stkOut ;
    stack < int > stk3 ;
    int n ;
    cout << "Enter 5 integer number : " ;
    for( int i = 0 ; i < 5 ; i++){
        cin>>n;
        stkIn.push(n);
    }
    while(!stkIn.empty()){
        int v = stkIn.top();
        stk3.push(v);
         stkIn.pop();
        stkOut.push(fact(v));
    }
    while(!stkOut.empty()){

        cout<< "Factorial : "<< stk3.top() << " = " << stkOut.top() << " " ;
        stkOut.pop();
        stk3.pop();
        cout<<endl;
    }

return 0;

}
