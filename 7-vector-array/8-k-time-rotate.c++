#include<iostream>
#include<vector>
using namespace std;
void rotat(int i,int j,vector<int>&v){
    while(i<j){
        // method--1-->> swaping with external variable 

        // int temp=v[i];
        // v[i]=v[j];
        // v[j]=temp;
        // i++;
        // j--;

        // method ---2-->> swaping without external variable

        v[i]=v[i]+v[j];
        v[j]=v[i]-v[j];
        v[i]=v[i]-v[j];
        i++;
        j--;
    }
    return ;
}
int main(){
    int n;
    cout<<"Enter size :";
    cin>>n;
    cout<<"Enter elements of vector :"<<endl;
    vector<int>v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int k;
    cout<<"Enter k rotate :"<<endl;
    cin>>k;
    if(k>n){
        k%=n;
    }
    rotat(0,n-1-k,v);
    rotat(n-k,n-1,v);
    rotat(0,n-1,v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}