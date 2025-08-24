#include<iostream>
#include<vector>
using namespace std;
int big(vector<int>&v,int x){
    int count=0;
    for(int i=0;i<v.size();i++){
        if(v[i]>x){
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter size :";
    cin>>n;
    cout<<"Enter elements of vector :"<<endl;
    vector<int>v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int x;
    cout<<"Enter x value :"<<endl;
    cin>>x;
    cout<<"number of elements greater than "<<x<<" is:"<<big(v,x);
}