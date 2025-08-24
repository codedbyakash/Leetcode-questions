#include<iostream>
using namespace std;
int main(){
    int a,b;
    int *num1=&a;
    int *num2=&b;
    cout<<"Enter 1st and 2nd number :";
    cin>>*num1>>*num2;
    // cout<<"Address of num1 and num2 is :"<<endl<<num1<<","<<num2<<endl;
    // cout<<"The assign value of num1 and num2 is :"<<endl<<*num1<<","<<*num2;

    cout<<"The sum of two numbers is :"<<*num1+*num2<<endl;
}