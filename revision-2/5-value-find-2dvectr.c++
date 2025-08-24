#include<iostream>
#include<vector>
using namespace std;
bool finding(vector<vector<int>>&v,int target){
    int row=v.size();
    int col=v[0].size();
    int i=0,j=col-1;
    while(i<row&&j>=0){
        if(v[i][j]==target)return true;
        else if(target>v[i][j])i++;
        else j--;
    }
    return false;
}
int main(){
    int n,m;
    cout<<"Enter number of rows and columns :";
    cin>>n>>m;
    vector<vector<int>>v(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    // 2d vector array is :
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
    }
        cout<<endl;
    }
    int target;
    cout<<"Enter target value :";
    cin>>target;
    cout<<finding(v,target);
}