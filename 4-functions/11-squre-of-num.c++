#include<iostream>
using namespace std;
int sqre(int x){
    int squre=x*x;
    return squre;
}
int main(){
    int n;
    cout<<"Enter value of n:";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"square of "<<i<<" is: "<<sqre(i);
        cout<<endl;
    }
}