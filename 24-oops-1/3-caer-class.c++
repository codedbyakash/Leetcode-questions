#include<iostream>
using namespace std;
class Car{
    public:
    string name;
    string type;
    int price;
    int seats;

};
void print(Car c){
    cout<<c.name<<" "<<c.type<<" "<<c.price<<" "<<c.seats<<endl;
}
void change(Car c){
    c.name="Audi A8";
}
int main(){
    // Car c1;
    // cout<<"enter car-1 name ,type ,price and seats:"<<endl;
    // cin>>c1.name;
    // cin>>c1.type;
    // cin>>c1.price;
    // cin>>c1.seats;
    // cout<<c1.name<<" "<<c1.type<<" "<<c1.price<<" "<<c1.seats;

    // Car c2;
    // cout<<"enter car-2 name ,type ,price and seats:"<<endl;
    // cin>>c2.name;
    // cin>>c2.type;
    // cin>>c2.price;
    // cin>>c2.seats;
    // cout<<c2.name<<" "<<c2.type<<" "<<c2.price<<" "<<c2.seats;

    // Car c3;
    // cout<<"enter car-3 name ,type ,price and seats:"<<endl;
    // cin>>c3.name;
    // cin>>c3.type;
    // cin>>c3.price;
    // cin>>c3.seats;
    // cout<<c3.name<<" "<<c3.type<<" "<<c3.price<<" "<<c3.seats;



    Car c1;
    c1.name="Honda_City";
    c1.type="Sedan";
    c1.price=1500000;
    c1.seats=5;
    print(c1);
    change(c1);//pass by value
    print(c1);
    // without pointer in functions values are pass by value 
    // but after applying pointer in this the value is pass by reference 

    // Car c2;
    // c2.name="Maruti-Suzuki";
    // c2.type="Hatchback";
    // c2.price=700000;
    // c2.seats=5;

    // Car c3;
    // c3.name="Toyota Fortuner";
    // c3.type="SUV";
    // c3.price=3600000;
    // c3.seats=8;
    // print(c1);
    // print(c2);
    // print(c3);
}   

