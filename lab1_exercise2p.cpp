#include<iostream>
#include <string.h>
using namespace std;

struct student {
string name;
int age,roll;
float marks;
};


int main() {
struct student s1[5];
for(int i = 0 ; i < 5 ; i++){
    cout<<"Enter name of student no  :"  <<i+1 <<endl ;
getline(cin,s1[i].name);
cout<<"Enter Roll student no : "<<i+1 <<endl ;
cin>>s1[i].roll;
cout<<"Enter age of student no : "<<i+1 <<endl;
cin>>s1[i].age;
cout<<"Enter marks of student no :  " <<i+1 <<endl;
cin>>s1[i].marks;

}

cout<< "Name of 2nd student :" << s1[1].name<<endl;
cout<< "Roll of 2nd student :" << s1[1].roll<<endl;
cout<< "Age of 2nd student :" << s1[1].age<<endl;
cout<< "Marks of 2nd student :" << s1[1].marks<<endl;



return 0;
}
