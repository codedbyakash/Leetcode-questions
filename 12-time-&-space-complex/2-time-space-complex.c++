#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of vector array :"<<endl;
    cin>>n;
    vector<int>v;
    cout<<"Enter vector elements :"<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int sum=0;
    int m=v.size()-1;
    for(int i=0;i<=m;i++){
        sum+=v[i];
    }
    int s=(m*(m+1))/2;
    cout<<"duplicate element is :"<<endl<<sum-s;
}