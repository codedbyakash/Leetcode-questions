#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of number :";
    cin>>n;
    int a=n;
    int count=0;
    while(n>0){
        n/=10;
        count++;
    }
    if(a==0) 
    cout<<"number of digits in number is :"<<1;
    else 
    cout<<"Total number of digits in given number is :"<<count;
}