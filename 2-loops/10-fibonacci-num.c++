#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of terms :";
    cin>>n;
    int a=1,b=1;
    if(n>2){
        cout<<a<<" "<<b<<" ";
        for(int i=3;i<=n;i++){
        int sum=0;
        sum=a+b;
        a=b;
        b=sum;
        cout<<sum<<" ";
    }
    }
    else{
        if(n==2)
        cout<<a<<" "<<b<<" ";
        else if(n==1)
        cout<<a<<" ";
        else 
        cout<<"fibonacci number is not exist:";
    }
}