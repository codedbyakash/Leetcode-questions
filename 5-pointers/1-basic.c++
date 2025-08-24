#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number :";
    cin>>a;
    int* ptr=&a;
    cout<<a<<","<<*ptr<<endl<<ptr;
}