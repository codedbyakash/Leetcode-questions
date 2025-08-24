#include<iostream>
using namespace std;
int main(){
    float a,b;
    cout<<"Enter base and power value :"<<endl;
    cin>>a>>b;
    float power=1;
    if(b<0){
        for(int i=1;i<=(-b);i++){
        power*=(1/a);
    }
    cout<<a<<" raised to the power "<<b<<" is :"<<power;
    }
    else if(a==0&&b==0){
        cout<<"not defined";
    }
    else{
        for(int i=1;i<=b;i++){
        power*=a;
    }
    cout<<a<<" raised to the power "<<b<<" is :"<<power;
    }
    
}