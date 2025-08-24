#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n :";
    cin>>n;
    for(int i=n;i<=n*10;i+=n){
        cout<<i<<" ";
    }
}