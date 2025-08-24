#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter size :";
    cin>>n;
     int x;
        cout<<"Enter x value :"<<endl;
        cin>>x;
    cout<<"Enter elements of vector :"<<endl;
    vector<int>v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if((v[i]+v[j])==x){
                cout<<"("<<i<<","<<j<<")"<<" ";
                }
            }
        }
    }