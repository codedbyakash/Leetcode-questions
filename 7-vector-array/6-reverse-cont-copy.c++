#include<iostream>
#include<vector>
using namespace std;
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
    vector<int>v1(v.size());
    for(int i=0;i<v.size();i++){
        v1[i]=v[v.size()-1-i];
    }
    cout<<"Reverse array elements are :"<<endl;
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
}