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
    void print(int a){
        // cout<<name<<" "<<runs<<" "<<avg<<endl; //or we can print with second methode 
        cout<<this->name<<" "<<this->runs<<" "<<this->avg<<endl;
        // in output we can print without this but when we pass argument through function then function can misread and print argument instead of that variable actual value

        cout<<a<<endl;
    }
};
int main(){
Cricketer c1("Yasasvi Jaiswal",4000,59.62);
Cricketer c2("Rohit Sharma",20000,58.34);
Cricketer c3("Sanju Samson",5000,65.21);
c1.print(4);
c2.print(5);
c3.print(6);
}