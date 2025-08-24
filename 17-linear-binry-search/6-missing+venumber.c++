#include<iostream>
#include<vector>
using namespace std;
int missingnum(vector<int>&v){
    int lo=0,hi=v.size()-1,ans=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(v[mid]!=mid){
            ans=mid;
            hi=mid-1;
        }
        else {
            lo=mid+1;
        }
    }
    return ans;
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
 cout<<"missing number is :"<<missingnum(v);
}