#include<iostream>
using namespace std;
int fact(int x){
    if(x==0)return 1;
    int f=x*fact(x-1);
    return f;
}
int main(){
    int n;
    cout<<"Enter number :"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"factorial of "<<i<<" is :"<<fact(i)<<endl;
    }
    // cout<<"factorial of "<<n<<" is :"<<fact(n);
}