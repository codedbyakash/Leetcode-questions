#include<iostream>
#include<vector>
using namespace std;
int unique(vector<int>&v){
    int num;
    bool flag=false;
    for(int i=0;i<v.size()-1;i++){
        for(int j=0;j<v.size();j++){
            if(v[i]!=v[j]){
                flag=false;
            }
            else{
                flag=true;
                num=v[i];
            }
        }
    }
    return num;
}
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
        cout<<"unique number is :"<<unique(v);
    }

    //  not understand proplerly 