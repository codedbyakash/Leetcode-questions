#include<iostream>
using namespace std;
//  a---->source ,b---> helper , c---> Destination
void hanoi(int n,char a,char b,char c){
    if(n==0)return;
hanoi(n-1,a,c,b) ;

cout<<a<<" --->"<<c<<endl;
hanoi(n-1,b,a,c); // now b is acting like a source 
}
int main(){
int n;
cout<<"Enter number of disk :";
cin>>n;
hanoi(n,'A','B','C'); 
}