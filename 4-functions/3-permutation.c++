#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f*=i;
    }
    return f;
}
int pnc(int n,int r){
    int permut=fact(n)/fact(n-r);
    return permut;
}
int main(){
    int n;
    cout<<"Enter number of terms :";
    cin>>n;
    int r;
    cout<<"Enter number of r :";
    cin>>r;
    cout<<"The permutation of "<<n<<"p"<<r<<" is :"<<pnc(n,r);
    
}