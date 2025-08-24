// #include<iostream>
// #include<string>
// using namespace std;
// class Teacher{
// //properties /attributs
// private:
// double salary;
// public:
// Teacher(){
// dept:"Electrical and computer engineering :";//inatiallize 
// }
// Teacher(string name,string dept,string subject,double salary){//paramaterized constructor
//     this->name=name;
//     this->dept=dept;
//     this->subject=subject;
//     this->salary=salary;
// }

// //copy constructor 
// Teacher(Teacher &orgobj){
// this->name=orgobj.name;
// this->dept=orgobj.dept;
// this->subject=orgobj.subject;
// this->salary=orgobj.salary;
// }
// void changeDept(string newDept){
//     dept=newDept;
// }
// //setter 
// void setsalary(double s){
//     salary=s;
// }
// //getter 
// double getsalary(){
//     return salary;
// }
// };
// int main(){
// Teacher t1("Akash","Electrical","c++",25000);
// Teacher t2(t1);//default copy constructor -->>>>

// cout<<t1.name<<endl;
// t1.getinfo();
// cout<<t1.getsalary()<<endl;
// return 0;
// }