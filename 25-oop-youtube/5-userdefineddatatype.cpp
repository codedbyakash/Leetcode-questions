#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int rno;
    int age;
    float gpa;
};
int main(){
    Student s1;
    s1.name="Akash Yadav";
    s1.rno=398;
    s1.age=20;
    // s1.gpa=6.8;
    //lets say suppose we want to take gpa as user input
    cin>>s1.gpa;
    Student s2;
    s2.name="vikash Yadav";
    s2.rno=298;
    s2.age=21;
    s2.gpa=8.8;
    cout<<s1.name<<" "<<s1.rno<<" "<<s1.age<<" "<<s1.gpa<<endl;
    cout<<s2.name<<" "<<s2.rno<<" "<<s2.age<<" "<<s2.gpa<<endl;
}