#include<iostream>
#include<vector>
using namespace std;
void sorting(vector<int>&v){

    // method-->1---> 2 pass method

    // int noz=0,noo=0;
    // for(int i=0;i<v.size();i++){
    //     if(v[i]==0){
    //         noz++;
    //     }
    //     else{
    //         noo++;
    //     }
    // }
    // for(int i=0;i<v.size();i++){
    //     if(i<noz){
    //         v[i]=0;
    //     }
    //     else{
    //         v[i]=1;
    //     }
    // }
    // cout<<"sorted array is :"<<endl;
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    
    // method-->2---> 1 pass method

    int i=0;
    int j=v.size()-1;
    while(i<j){
        if(v[i]==0){
            i++;
        }
        else if(v[j]==1){
            j--;
        }
        else{
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
    }
     cout<<"sorted array is :"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter size of vector array :"<<endl;
    cin>>n;
    vector<int>v;
    cout<<"enter elements of vector array :"<<endl;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    sorting(v);
}