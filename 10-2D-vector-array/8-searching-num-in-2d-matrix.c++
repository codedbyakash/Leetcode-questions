#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter number of rows and columns :"<<endl;
    cin>>n>>m;
    vector<vector<int>>v(n,vector<int>(m));
    cout<<"Enter binary elements of matrix :"<<endl;
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>v[i][j];
    }
    }
    int x=56;
    for(int i=0;i<n;i++){
        for(int j=m-1;j>=0;j--){
            if(v[i][j]>x) j--;
            else i++;
        }
    }
    
}