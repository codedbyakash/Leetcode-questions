#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f*=i;
    }
    return f;
}
int combit(int n,int r){
    int ncr=(fact(n)/(fact(r)*fact(n-r)));
    return ncr;
}
int main(){
   int n,r;
   cout<<"Enter value of n and r :";
   cin>>n>>r;
   cout<<"The combinantion value is :"<<combit(n,r);   
}