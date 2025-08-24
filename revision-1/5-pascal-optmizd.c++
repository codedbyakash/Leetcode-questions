#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows :"<<endl;
    cin>>n;
    cout<<"pascal triangle with optimized methode is :"<<endl;
    for(int i=0;i<n;i++){
        int curr=1;
        for(int j=0;j<=i;j++){
            cout<<curr<<" ";
            curr=curr*(i-j)/(j+1);
        }
        cout<<endl;
    }
}