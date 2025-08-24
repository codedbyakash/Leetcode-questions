#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of terms :";
    cin>>n;
    int gp=1;
    for(int i=1;i<=n;i++){
        cout<<gp<<" ";
        gp*=2;
    }
}