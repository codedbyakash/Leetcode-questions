#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int cub=0;
    int ld,a=n;
    while(n>0){
        ld=n%10;
        cub+=(ld*ld*ld);
        n/=10;
    }
    if(a==cub){
        cout<<"The given number "<<a<<" is armstrong";
    }
    else{
        cout<<"The given number "<<a<<" is not a armstrong";
    }
}