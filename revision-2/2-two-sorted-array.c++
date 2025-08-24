#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&v,vector<int>&v1){
    int n=v.size();
    int m=v1.size();
    vector<int>merg(n+m);
    int i=0,j=0,k=0;
    while(i<=n&&j<=m){
        if(v[i]<v1[j]){
            merg[k]=v[i];
            i++;
        }
        else{
            merg[k]=v1[j];
            j++;
        }
        k++;
    }
    if(i==n){
        while(j<=m){
            v[k]=v1[j];
        j++;
    k++;        }
    }
    if(j==m){
        while(i<=n){
            v[k]=v[i];
        i++;
    k++;        }
    }
    cout<<"Merged sorted vector array is :"<<endl;
    for(int i=0;i<merg.size();i++){
        cout<<merg[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter size of 1st vector array :"<<endl;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int m;
    cout<<"Enter size of 2nd vector array :"<<endl;
    cin>>m;
    vector<int>v1;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }
    merge(v,v1);
}