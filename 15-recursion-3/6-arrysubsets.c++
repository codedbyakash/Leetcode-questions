#include<iostream>
#include<vector>
using namespace std;
void arrysubset(int arr[],int n,int idx,vector<int>ans){
    if(idx==n){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
    }
    cout<<endl;
    return ;
    }
arrysubset(arr,n,idx+1,ans);
ans.push_back(arr[idx]);
arrysubset(arr,n,idx+1,ans);
}
int main(){
    int n;
    cout<<"Enteer size of vector array a:"<<endl;
    cin>>n;
    // vector<int>v;
    int arr[n];
    cout<<"Enter elements of vector array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>v;
    arrysubset(arr,n,0,v);
}