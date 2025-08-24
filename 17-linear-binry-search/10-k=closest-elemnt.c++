#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> findClosestElements(vector<int>&arr,int k,int x){
int lo=0, hi=arr.size()-1,idx;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(arr[mid]==x){
                idx=mid;
                break;
            }
            else if(arr[mid]<x){
                lo=mid+1;
            }
            else {
                hi=mid-1;
            }
        }
        //elements push in vector
        vector<int>v;
        v.push_back(arr[idx]);
        int lb=idx-1,ub=idx+1;
        while(v.size()<=k){
            if((arr[lb]-x)<(arr[ub]-x)){
                v.push_back(arr[lb]);
                lb--;
            }
            else if((arr[lb]-x)>(arr[ub]-x)){
                v.push_back(arr[ub]);
                ub++;
            }
            else if((arr[lb]-x)==(arr[ub]-x)){
                v.push_back(arr[lb]);
                lb--;
            }
            
        }
        sort(v.begin(),v.end());
        cout<<"return vector is :"<<endl;
        for(int i=0;i<k;i++){
        cout<<v[i]<<" ";
    }     
}
int main(){
    int n;
    cout<<"Enter size of vector element :";
    cin>>n;
    vector<int>arr;
    cout<<"Enter elements of vector array :"<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int k;
    cout<<"Enter k value :";
    cin>>k;
    int x;
    cout<<"Enter x value :";
    cin>>x;
    findClosestElements(arr,k,x);
    
}