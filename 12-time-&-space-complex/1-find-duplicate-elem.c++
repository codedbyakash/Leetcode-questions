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
    bool flag=true;
    int idx;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n+1;j++){
            if(v[i]==v[j]){
                idx=i;
                flag=false;
                break;
            }
            if (flag==false)
            break;
        }
    }
    if(flag==false)cout<<"duplicate element is exist:";
    else cout<<"duplicate element is not exist:";
    
}
//  this method has less time complexity so we dont prefer to use this code for this problem
