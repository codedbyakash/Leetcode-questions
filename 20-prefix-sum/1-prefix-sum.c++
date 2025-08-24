#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of vector array :";
    cin>>n;
    vector<int>v;
    cout<<"enter vector elements :"<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=1;i<n;i++){
        v[i]=v[i]+v[i-1];
    }
    // for calculating individual sum of numbers from ith position to jth position 
    // you have to calculate it's final prefix vector sum difference
    
    cout<<"vector array after prefix sum :"<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}