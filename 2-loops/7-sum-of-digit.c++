#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number :";
    cin>>n;
    int count=0,ld;
    int sum=0;
    while(n>0){
        ld=n%10;
        n/=10;
        sum+=ld;
    }
    cout<<"The sum of digits is :"<<sum;
}