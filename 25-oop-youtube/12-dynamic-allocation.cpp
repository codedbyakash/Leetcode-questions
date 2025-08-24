#include<iostream>
using namespace std;
class Cricketer{
public:
    string name;
    int runs;
    float avg;
    Cricketer(string name,int runs,float avg){
        this->name=name;
        this->runs=runs;
        this->avg=avg;
    }
};
int main(){
Cricketer c1("Yasasvi Jaiswal",4000,59.62);
Cricketer* c2=new Cricketer("Rohit Sharma",20000,58.34); //object pointer 
// now we are intallize object using pointer methode
Cricketer* c3=new Cricketer("Sanju Samson",5000,65.21);

cout<<c1.name<<" "<<c1.runs<<" "<<c1.avg<<endl;
cout<<c2->name<<" "<<c2->runs<<" "<<c2->avg<<endl;
cout<<c3->name<<" "<<c3->runs<<" "<<c3->avg<<endl;

}