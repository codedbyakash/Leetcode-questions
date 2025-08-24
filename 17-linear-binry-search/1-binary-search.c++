#include<iostream>
#include<vector>
using namespace std;
void binryserch(vector<int>&v,int target){
   int n=v.size();
    int lo=0,hi=n-1;
    while(lo<=hi){
      int mid=lo+(hi-lo)/2;
      if(v[mid]==target){
         cout<<v[mid];
         break;
      }
      else if(v[mid]<target) lo=mid+1;
      else hi=mid-1;
    }
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
 binryserch(v,target);
}