#include<iostream>
using namespace std;
int sum1ton(int n){
if(n==1)return 1;
int sum=n+sum1ton(n-1);
return sum;
}
int main(){
    int n;
    cout<<"enter n :"<<endl;
    cin>>n;
    cout<<sum1ton(n)<<endl;
}