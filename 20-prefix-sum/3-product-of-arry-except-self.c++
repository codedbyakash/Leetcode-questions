// product of array except self 
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
    // formation of product of array 
    int product=1;
   for(int i=0;i<n;i++) {
    product*=v[i];
   }
   for(int i=0;i<n;i++){
    v[i]=product/v[i];
   }
   cout<<"product of array except itself is :"<<endl;
   for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
   }

}