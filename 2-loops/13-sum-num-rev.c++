#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    int rev=0,a=n,ld;
    if(n>=0){
    while(n>0){
        ld=n%10;
        rev=rev*10+ld;
        n/=10;
    }
}
else{
    while(n*(-1)>0){
        ld=n%10;
        rev=rev*10+ld;
        n/=10;
}
}
 cout<<"The sum of given number "<<a<<" and its reverse number "<<rev<<" is :"<<a+rev;
}