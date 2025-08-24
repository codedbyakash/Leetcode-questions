#include<iostream>
#include<vector>
using namespace std;
int main(){
        int n;
        cout<<"Enter size :";
        cin>>n;
        vector<int>v;
        cout<<"Enter vector elements :"<<endl;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        cout<<"Vector element is :"<<endl;
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
    }