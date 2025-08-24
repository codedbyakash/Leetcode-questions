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
// Cricketer c2("Rohit Sharma",20000,58.34);
// Cricketer c3("Sanju Samson",5000,65.21);

// now we want to printing values object values using pointers
Cricketer*p1=&c1;
// cout<<(*p1).runs<<endl;
cout<<p1->runs<<endl;//(*p1).runs and p1->runs are same

// int x=67;
// cout<<&x<<endl;
// int*p=&x;
// cout<<p<<endl;
// cout<<*p<<endl;
// *p=234;
// cout<<x;

}