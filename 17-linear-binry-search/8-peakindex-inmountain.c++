#include<iostream>
#include<vector>
using namespace std;
int mountainindex(vector<int>&v){
    int n=v.size();
    int lo=0,hi=n-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(v[mid]>v[mid-1]&&v[mid]>v[mid+1]){
            return mid;
            break;
        }
        else if(v[mid]>v[mid-1]){
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
}
}
int main(){
int n;
cout<<"Enter size of vector array : ";
cin>>n;
vector<int>v;
cout<<"Enter elements of vector elements :";
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
} 
if(n>=3){
    cout<<mountainindex(v);
}
else cout<<"mountain element is does not exist :";
}