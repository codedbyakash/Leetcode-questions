#include<iostream>
#include<vector>
using namespace std;
int fibo(int n){
    if(n==1||n==2) return 1;
    return fibo(n-1)+fibo(n-2);
}
void printnto1(int n){
    if(n==0)return;
    printnto1(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cout<<"Enter number of terms:";
    cin>>n;
    cout<<n<<"th fibonacci number is :"<<fibo(n);
}