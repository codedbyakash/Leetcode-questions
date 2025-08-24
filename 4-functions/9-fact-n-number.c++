#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f*=i;
    }
    return f;
}
int main(){
    int n;
    cout<<"Enter number of terms :";
    cin>>n;
    for(int i=0;i<=n;i++){
        cout<<"factorial of "<<i<<" is :"<<fact(i)<<endl;;
    }
}