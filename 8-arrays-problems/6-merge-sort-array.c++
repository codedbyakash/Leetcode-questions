#include<iostream>
#include<vector>
using namespace std;
vector<int>merge(vector<int>&v1,vector<int>&v2){
    int n=v1.size();
    int m=v2.size();
    vector<int>v3(n+m);
    int i=0,j=0,k=0;
    while(i<n&&j<m){
        if(v1[i]<v2[j]){
            v3[k]=v1[i];
            i++;
        }
        else{
            v3[k]=v2[j];
            j++;
        }
        k++;
// for remaning elements 
if(i==n){
    while(j<m){
        v3[k]=v2[j];
        j++;
        k++;
    }
}
if(j==m){
    while(i<n){
        v3[k]=v1[i];
        i++;
        k++;
    }
}
    }
    return v3;
    }
int main(){
        int n;
        cout<<"Enter size of 1st vector array :";
        cin>>n;
        vector<int>v1;
        cout<<"Enter elements of 1st vector array :"<<endl;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v1.push_back(x);
        }
        int m;
        cout<<"Enter size of 2nd vector array :"<<endl;
        cin>>m;
        cout<<"Enter elements of 2nd vector array :"<<endl;
        vector<int>v2;
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            v2.push_back(x);
                }
        vector<int>v3=merge(v1,v2);
        cout<<"Merged sorted vector array is :"<<endl;
        for(int i=0;i<v3.size();i++){
            cout<<v3[i]<<" ";
        }
    }