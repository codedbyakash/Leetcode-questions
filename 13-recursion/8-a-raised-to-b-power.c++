#include<iostream>
using namespace std;
int raisedpow(int a,int b){
    if(b==0)return 1;
    int pow=a*raisedpow(a,b-1);
    return pow;
}
int main(){
    int a,b;
    cout<<"Enter base and power value:"<<endl;
    cin>>a>>b;
    cout<<a<<" raised to power "<<b<<" is :"<<raisedpow(a,b);

}