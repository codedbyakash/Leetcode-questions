#include<iostream>
#include<vector>
using namespace std;
void subsetofarry(int arr[],int n,vector<int>ans,int idx){
    if(idx==n){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
        }
        cout<<endl;
        return;
    }
    subsetofarry(arr,n,ans,idx+1);
    ans.push_back(arr[idx]);
    subsetofarry(arr,n,ans,idx+1);
}
int main(){
    int n;
    cout<<"enter size of array :";
    cin>>n;
    int arr[n];
    cout<<"enter elements of vector array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>v;
    subsetofarry(arr,n,v,0);
}