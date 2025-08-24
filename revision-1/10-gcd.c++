#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int a,int b){
    int minimum=min(a,b);
    bool flag=true;
    for(int i=minimum;i>=0;i--){
        if(a%i==0&&b%i==0){
            return i;
            break;
        }
        else {
            flag=false;
        }

    }
    return flag;
}
int main(){
    int a,b;
    cout<<"Enter 1st and 2nd number :";
    cin>>a>>b;
        cout<<"greatest common divisor is :"<<gcd(a,b)<<endl;

    }