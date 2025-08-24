#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n:";
    cin>>n;
    int rev=0,ld;
    while(n>0){
        ld=n%10;
        rev=rev*10+ld;
        n/=10;
    }
    cout<<"The reverse of number is :"<<rev;
}