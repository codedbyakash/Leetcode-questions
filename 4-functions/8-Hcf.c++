#include<iostream>
using namespace std;
int hcd(int a,int b){
    int hi=min(a,b);
    int hcf;
    for(int i=hi;i>0;i--){
        if(a%i==0&&b%i==0){
            hcf=i;
            break;
        }
    }
    return hcf;
}
int main(){
    int a,b;
    cout<<"Enter values of a and b :";
    cin>>a>>b;
    cout<<"Highest common factor of "<<a<<" and "<<b<<" is :"<<hcd(a,b);

}