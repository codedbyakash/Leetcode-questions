#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array :";
    cin>>n;
    vector<int>v;
    cout<<"Enter elements of vector  array :";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<endl<<"without sorting :"<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl<<"after sorting "<<endl;
    sort(v.begin(),v.end());//inbuilt sorting ,
    //  with time complexity of O(nlogn)
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}