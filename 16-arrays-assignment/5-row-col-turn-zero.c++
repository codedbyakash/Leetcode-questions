#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter number of rows and columns :";
    cin>>n>>m;
    vector<vector<int>>v(n,vector<int>(m));
    cout<<"Enter elements of vector array :";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    int idx,idx1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]==0){
                idx=i;
                idx1=j;
            break;            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==idx||j==idx1){
                v[i][j]=0;

            }
        }
    }
    cout<<"final matrix is :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}