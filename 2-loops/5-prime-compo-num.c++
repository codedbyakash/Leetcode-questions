#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    bool funk=true;
    for(int i=2;i<n;i++){
        if(n%i==0)
        funk=false;
        break;
    }
    if(funk==false)
    cout<<n<<" is a composite number ";
    else
    cout<<n<<" is a Prime number :"; 
}