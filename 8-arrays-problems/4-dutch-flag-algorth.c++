#include<iostream>
#include<vector>
using namespace std;
void sorted(vector<int>&v){
    int lo=0,mid=0,hi=v.size()-1;
    while(mid<=hi){
        if(v[mid]==0){
            // int temp=v[mid];
            // v[mid]=v[lo];
            // v[lo]=temp;
            swap(v[mid],v[lo]);
            mid++;
            lo++;
        }
        else if(v[mid]==2){
            // int temp=v[mid];
            // v[mid]=v[hi];
            // v[hi]=temp;
            swap(v[mid],v[hi]);
            hi--;
        }
        else {
            mid++;
        }
    }
    cout<<"sorted array is :"<<endl;
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
        sorted(v);
    }