#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows :";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j>=0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}