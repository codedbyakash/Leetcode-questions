#include<iostream>
using namespace std;
class Student{//student is a new data type
public:
    string name;
    int rno;
    float gpa;

};
// tabnine:test|explain|document|ask
int main(){
    // s1 and s2 is a object 
Student s1;
s1.name="Akash-Yadav";
s1.rno=78;
s1.gpa=8.6;

Student s2;
cout<<"Enter 2nd student name gpa and roll number :"<<endl;
cin>>s2.name;
cin>>s2.rno;
cin>>s2.gpa;

cout<<s1.name<<" "<<s1.gpa<<" "<<s1.rno<<endl;
cout<<s2.name<<" "<<s2.rno<<" "<<s2.gpa<<endl;

}