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
void print(){
   cout<<this->name<<" "<<this->runs<<" "<<this->avg<<endl;
}
};
int main(){
    Cricketer c1("Virat Kohli",25000,89.56);
    Cricketer c2("Rohit Sharma",18000,98.45);
    // cout<<c1.name<<" "<<c1.runs<<endl;
    // cout<<c2.name<<" "<<c2.runs;
    // c1.name="Akash yadav";
    c1.print();
    c2.print();
}