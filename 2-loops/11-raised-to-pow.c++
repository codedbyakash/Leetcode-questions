#include<iostream>
using namespace std;
int main(){
    float a,b;
    cout<<"Enter base and power value respectively :";
    cin>>a>>b;
    float pow=1;
    if((a==0&&b==0)||(a==0)){
        cout<<"Does not exist :";
    }
    else{
        if(b<0){
            for(float i=1;i<=b;i++){
            pow=(1/pow)*(1/a);
            }
            cout<<a<<" raised to power "<<b<<" is :"<<pow;
        }
        else{
            for(float i=1;i<=b;i++){
            pow=pow*a;
            }
            cout<<a<<" raised to power "<<b<<" is :"<<pow;
        }
        }
    }