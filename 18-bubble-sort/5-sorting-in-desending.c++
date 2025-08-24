#include<iostream>
#include<vector>
using namespace std;
void sorting(vector<int>&v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=0;j<n-1-i;j++){
            if(v[j]<v[j+1]){
                flag=false;
                swap(v[j],v[j+1]);
            }
        }
        if(flag==true )break;
    }
    cout<<"vector array after sorting :"<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
}
}
int main(){
    int n;
    cout<<"enter size of vector array :";
    cin>>n;
    vector<int>v;
    cout<<"enter vector array elements :"<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sorting(v);
}