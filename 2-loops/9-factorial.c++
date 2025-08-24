#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n :";
    cin>>n;
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
        cout<<"factorial of "<<i<<" is :"<<f<<" "<<endl;
    }
    // cout<<"factorial of "<<"is :"<<f;
}