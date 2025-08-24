#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter size :";
    cin>>n;
    int x;
    cout<<"Enter x value :"<<endl;
    cin>>x;
    cout<<"Enter elements of vector :"<<endl;
    vector<int>v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    bool flag=false;
    int idx=0;
    for(int i=v.size()-1;i>=0;i--){
        if(x==v[i]){
            flag=true;
            idx=i;
            break;
        }
        // else {
        //     idx=0;
        // }
    }
    if(flag==true){
        cout<<"ocured element index is :"<<idx;
    }
    else {
    cout<<"Element not occured :";
}
}