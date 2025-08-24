#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of terms :";
    cin>>n;
    int ap=1;
    for(int i=1;i<=n;i++){
        cout<<ap<<" ";
        ap+=2;
    }
}