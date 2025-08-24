#include<iostream>
#include<vector>
using namespace std;
int stairpath(int n){
    if(n==1)return 1;
    else if(n==2)return 2;
    return stairpath(n-1)+stairpath(n-2);
}
int main(){
    int n;
    cout<<"Enter number :";
    cin>>n;
    cout<<stairpath(n);
}