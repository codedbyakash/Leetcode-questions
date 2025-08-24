#include<iostream>
#include<vector>
using namespace std;
void first_ocurnce(vector<int>&v,int target){
   int n=v.size();
    int lo=0,hi=n-1;
    bool flag=false;
    while(lo<=hi){
      int mid=lo+(hi-lo)/2;
      if(v[mid]==target){
         if(v[mid-1]==target){
            hi=mid-1;
         }
         else {
            cout<<"first occurance of "<<n<<" index is :"<<mid;
            break;
         }
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
 first_ocurnce(v,target);
}