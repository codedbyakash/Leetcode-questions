#include<iostream>
#include<vector>
using namespace std;
int findfirst(vector<int>&v,int target){
    int lo=0,hi=v.size()-1,first=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(v[mid]==target){
            first=mid;
            hi=mid-1;
        }
        else if(v[mid]<target)lo=mid+1;
        else hi=mid-1;
    }
    return first;
}
int findlast(vector<int>&v,int target){
    int lo=0,hi=v.size()-1,last=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(v[mid]==target){
            last=mid;
            lo=mid+1;
        }
        else if(v[mid]<target)lo=mid+1;
        else hi=mid-1;
    }
    return last;
}
int main(){
 int n;
 cout<<"Enter size of vector array :";
 cin>>n;
 vector<int>v;
 cout<<"Enter elements :"<<endl;
 for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
 } 
 int target;
 cout<<"Enter target number :";
 cin>>target;  
 int first=findfirst(v,target);
 int last=findlast(v,target);
 cout<<"The first and last index of target element in vector array is :"<<first<<","<<last;
}