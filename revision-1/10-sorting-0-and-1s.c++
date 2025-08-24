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
    int noz=0,noo=0;
    for(int i=0;i<n;i++){
        if(v[i]==0)noz++;
        else noo++;
    }
    for(int i=0;i<n;i++){
        if(i<noz) v[i]=0;
        else v[i]=1;
    }
    cout<<"sorted elements of vector array is :"<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
}
}
