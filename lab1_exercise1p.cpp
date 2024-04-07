#include<iostream>
#include <string>
using namespace std;

struct student {
string name;
int age,roll;
float marks;
};


int main() {
struct student s1;
cout<<"Enter name: " ;
getline(cin,s1.name);
cout<<"Enter Roll: " ;
cin>>s1.roll;
cout<<"Enter age: " ;
cin>>s1.age;
cout<<"Enter marks: ";
cin>>s1.marks;
cout<< "Name :" << s1.name<<endl;
cout<< "Roll :" << s1.roll<<endl;
cout<< "Age :" << s1.age<<endl;
cout<< "Marks :" << s1.marks<<endl;



return 0;
}
