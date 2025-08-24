#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int rno;
    int age;
    float gpa;
    Student(){//default constructor 

    }
    //constructor to inatlize in one line
    Student(string s,int r,float g){//parametrized constructor
        name=s;
        rno=r;
        gpa=g;
    }
    Student(int r,string s,float g){
        rno=r;
        name=s;
        gpa=g;
    }
};
int main(){
    Student s1("Akash Yadav",398,7.5);
    // s1.name="Akash Yadav";
    // s1.rno=398;
    // s1.age=20;
    // s1.gpa=6.8;

    Student s2;
    s2.name="Himanshu";
    s2.rno=34;
    s2.gpa=9.8;
    Student s3(35,"xyzqwe",56.9);
    
    cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa<<endl;
    cout<<s2.name<<" "<<s2.rno<<" "<<s2.gpa<<endl;
    cout<<s3.name<<" "<<s3.rno<<" "<<s3.gpa<<endl;
}