#include<iostream>
using namespace std;
int fibonacc(int n){
    if(n==1||n==2)return 1;
    int sum=fibonacc(n-1)+fibonacc(n-2);
    return sum;
}
int main(){
    int n;
    cout<<"Enter number of terms :"<<endl;
    cin>>n;
    cout<<n<<"t fibonacci term is :"<< fibonacc(n);
}