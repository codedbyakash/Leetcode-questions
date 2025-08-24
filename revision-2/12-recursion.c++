#include<iostream>
using namespace std;
int araisedtopowerb(int a,int b){
    if(b==0)return 1;
    return a*araisedtopowerb(a,b-1);
}
int sumfrom1ton(int n){
    if(n==1)return 1;
    return n+sumfrom1ton(n-1);
}
void printnto1(int n){
    if(n==0)return;
    cout<<n;
    printnto1(n-1);
}
void print1ton(int n){
    if(n==0)return;
    print1ton(n-1);
    cout<<n;
}
int factor(int n){
    if(n==0)return 1;
   return  n*factor(n-1);
}
int main(){
   int n;
   cout<<"Enter n value :";
   cin>>n;
   cout<<factor(n)<<endl;
   print1ton(n);
   printnto1(n);
   cout<<endl<<sumfrom1ton(n)<<endl;
   int a,b;
   cout<<"enter values of a and b:";
   cin>>a>>b;
   cout<<araisedtopowerb(a,b);

    }