#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows  :";
    cin>>n;
    int mid=n/2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if((j==(mid+1))||(i==(mid+1)))
            cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}