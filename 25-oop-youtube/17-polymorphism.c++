//compile time polymorphism
#include<iostream>
using namespace std;
class Loading{
public:
    void sum(string a,string b){
        cout<<a+b<<endl;  
      }
    void sum(int a,int b){
        cout<<a+b<<endl;      
    }
    void sum(int a,int b,int c){
        cout<<a+b+c<<endl;
    }
    // void sum(int a,int b){
    //     cout<<a+b<<endl;
    // }

};
int main(){
    Loading a;
    a.sum(34,45);
    a.sum(23,21,12);
    // a.sum("Akash","yadav");//this was showing error because you have to write different variables or their name not use same type of variables multiple times
    
}