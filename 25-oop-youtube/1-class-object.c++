#include<iostream>
#include<string>
using namespace std;
class Teacher{
//properties /attributs
private:
double salary;
public:
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
class Account{
    private://access modifier
    double balance;
    string password;//data hiding
    public://access modifier
    string AccountId;
    string username;
};
int main(){
Teacher t1;
t1.name="Akash";
t1.subject="c++";
t1.dept="Electrical Engineering:";
t1.setsalary(25000);

cout<<t1.name<<endl;
cout<<t1.getsalary()<<endl;
return 0;
}