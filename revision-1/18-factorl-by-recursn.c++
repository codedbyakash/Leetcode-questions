#include<iostream>
#include<vector>
using namespace std;
int recursn(int n){
    if(n==0||n==1) return 1;
    return n*recursn(n-1);
}
int main(){
    int n;
    cout<<"Enter number :";
    cin>>n;
    cout<<"factorial of :"<<n<<" is :"<<recursn(n);
}