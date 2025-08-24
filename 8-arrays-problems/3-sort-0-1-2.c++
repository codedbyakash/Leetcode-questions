// : Sort the array of 0’s , 1’s and 2’s
#include<iostream>
#include<vector>
using namespace std;
void sorting(vector<int>&v){
    int noz=0,noo=0,notw=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0){
            noz++;
        }
        else if(v[i]==1){
            noo++;
        }
        else{
            notw++;
        }
    }
    for(int i=0;i<v.size();i++){
        if(i<noz){
            v[i]=0;
        }
        else if(i<(noz+noo)){
            v[i]=1;
        }
        else{
            v[i]=2;
        }
    }
    cout<<"Sorted array is :"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
        int n;
        cout<<"Enter size :";
        cin>>n;
        vector<int>v;
        cout<<"Enter vector elements :"<<endl;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        sorting(v);
    }