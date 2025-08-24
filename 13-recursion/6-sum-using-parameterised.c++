#include<iostream>
using namespace std;
void sum1ton(int sum,int n){
    if(n==0){
      cout<<sum<<endl;
      return;  
    }
    sum1ton(sum+n,n-1);
    
}
int main(){
    int n;
    cout<<"Enter number :"<<endl;
    cin>>n;
    int sum=0;
    sum1ton(sum,n);
    }