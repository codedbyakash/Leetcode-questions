#include<iostream>
using namespace std;
void oddnum(int a,int b){
    if(a>b){
        oddnum(b,a);
    }
    for(int i=a+1;i<b;i++){
        if(i%2!=0){
            cout<<i<<",";
        }
    }
}
int main(){
        int a,b;
        cout<<"Enter first and last number :";
        cin>>a>>b;
        oddnum(a,b);
}