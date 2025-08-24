#include<iostream>
using namespace std;
void fun(int n){
    if(n==0)return ;
    cout<<"Hello Akash ,Good Morning :"<<endl;
    fun(n-1);
}
int main(){
    int n;
    cout<<"Enter number of time you want to print:"<<endl;
    cin>>n;
    fun(n);
}