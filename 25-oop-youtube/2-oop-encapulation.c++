#include<iostream>
#include<string>
using namespace std;
class Teacher{
//properties /attributs
private:
double salary;
public:
Teacher(){//non paraterized constructor
// cout<<"Hi i am constructor:"<<endl;
dept:"Electrical and computer engineering :";//inatiallize 
}
string name;
string dept;
string subject;
//methods /member functions
void changeDept(string newDept){
    dept=newDept;
}
//setter 
void setsalary(double s){
    salary=s;
}
//getter 
double getsalary(){
    return salary;
}
};
int main(){
Teacher t1;//constructor call
Teacher t2;
t1.name="Akash";
t1.subject="c++";
// t1.dept="Electrical Engineering:";   //right now don't need of this line because we already inatialize in class
t1.setsalary(25000);

cout<<t1.name<<endl;
cout<<t1.getsalary()<<endl;
return 0;
}