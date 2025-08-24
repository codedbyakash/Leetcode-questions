#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 1st,2nd and 3rd number :";
    cin>>a>>b>>c;
    if(a>b){
        if(b>c){
            cout<<a<<" is greatest number :";
        }
        else{
            cout<<c<<" is greatest :";
        }
    }
    else{
        if(b>c){
            cout<<b<<" is greatest :";
        }
        else {
            cout<<c<<" is greatest :";
        }
    }
}