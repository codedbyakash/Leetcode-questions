#include<iostream>
using namespace std;
class Student{//student is a new data type
public:
    string name;
    int rno;
    float gpa;

    // constructor
Student(){  //---->>>>Default constructor

    }
Student(string s,int r,float g){//parametrised constructor
        name=s;
        rno=r;
        gpa=g;
    }
Student(string s,int r){
    rno=r;
    name=s;
}
Student(float g){
    gpa=g;
}
Student(int r){
    rno=r;
}
Student(int r,float g,string s){
    name=s;
    rno=r;
    gpa=g;
}
};
// tabnine:test|explain|document|ask
int main(){
    Student s1("Akash Yadav",78,78.34);
    // s1 and s2 is a object 
// Student s1;
// s1.name="Akash-Yadav";
// s1.rno=78;
// s1.gpa=8.6;

Student s2("storm",78);
// Student s2;
// cout<<"Enter 2nd student name gpa and roll number :"<<endl;
// cin>>s2.name;
// cin>>s2.rno;
// cin>>s2.gpa;

Student s3(34);

Student s4(567);
Student s5(345,78.54,"Kian");

Student s6=s1;//deep copy 
s6.name="boolean";

Student s7(s1);//copy constructor ----deep copy
s7.name="monk";
cout<<s1.name<<" "<<s1.gpa<<" "<<s1.rno<<endl;
cout<<s2.name<<" "<<s2.rno<<endl;
cout<<s3.rno<<" "<<endl;
cout<<s6.name<<" "<<s6.rno<<" "<<s6.gpa<<endl;
cout<<s7.name<<" "<<s7.rno<<" "<<s7.gpa<<endl;
}