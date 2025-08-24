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
    Student(string name,int rno,float gpa){//this keyword use when we are intallzing arguments are same
        this->name=name;
        this->rno=rno;
        this->gpa=gpa;
    }
    Student(int r,string s,float g){
        rno=r;
        name=s;
        gpa=g;
    }
    Student(int r){
        rno=r;
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
    Student s4(30);

    Student s5=s1;//deep copy like in array pass by value means after aloting s5 to s1 values does not change in s1
    s5.name="khwaish yadav";

    Student s6(s2);//copy constructor //deep copy
    s6.name="Vikash yadav";
    
    cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa<<endl;
    cout<<s2.name<<" "<<s2.rno<<" "<<s2.gpa<<endl;
    cout<<s3.name<<" "<<s3.rno<<" "<<s3.gpa<<endl;
    cout<<s4.rno<<endl;
    cout<<s5.name<<" "<<s5.rno<<" "<<s5.gpa<<endl;
    cout<<s6.name<<" "<<s6.rno<<" "<<s6.gpa<<endl;
}