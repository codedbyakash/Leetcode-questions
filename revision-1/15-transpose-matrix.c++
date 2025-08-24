#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter number of rows and columns :"<<endl;
    cin>>n>>m;
    vector<vector<int>>v(n,vector<int>(m));
    cout<<"Enter elements of vector matrix :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    if(n==m){
        for(int i=0;i<n;i++){
            for(int j=i+1;j<m;j++){
                // swap(v[i][j],v[j][i]);
                int temp=v[i][j];
                v[i][j]=v[j][i];
                v[j][i]=temp;
            }
        }
        cout<<"matrix after transpose is :"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
            vector<vector<int>>res(m,vector<int>(n));
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    res[i][j]=v[j][i];
                }
            }
            cout<<"matrix after transpose is :"<<endl;
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    cout<<res[i][j]<<" ";
                }
                cout<<endl;
            }
        }
}