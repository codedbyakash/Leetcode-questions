#include<iostream>
using namespace std;
class car{//student is a new data type
public:
string name;
int price;
int seats;
string type;

};
void print(car c){
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<endl;
}
//pass by value and pass by reference concept
int main(){
car c1;
c1.name="Honda City";
c1.price=1500000;
c1.seats=5;
c1.type="seaden";

car c2;
c2.name="maruti swift";
c2.price=700000;
c2.seats=5;
c2.type="hatchback";

car c3;
c3.name="Toyota Fortuner";
c3.price=3600000;
c3.seats=8;
c3.type="suv";

print(c1);
print(c2);
print(c3);
}