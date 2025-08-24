#include<iostream>
using namespace std;
class Student{
public:
    int age;
    string name;
    Student(){

    }
    Student(int age,string name,float marks){
    this->age=age;
    this->name=name;
    this->age=age;
    }
    float getmarks(){//getter 
        return marks;
    }
    void setmarks(float m){//setter
        marks=m;
    }
private:
    float marks;
    };
    void print(Student s){
        cout<<s.age<<" "<<s.name<<" "<<s.getmarks()<<endl;
    }
int main(){
Student s1(20,"Akash Yadav",89.15);  
print(s1);
s1.name="Yadav";
cout<<s1.getmarks()<<endl;//gettter are used to pring private class thisngs 
s1.setmarks(78.45);
// and setter is used to change private class things 

}