#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter number of rows and columns of 1st matrix:"<<endl;
    cin>>n>>m;
    int a[n][m];
    cout<<"Enter elements of 1st matrix :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int p,q;
    cout<<"Enter number of rows and columns of 2nd matrix :"<<endl;
    cin>>p>>q;
    int b[p][q];
    cout<<"Enter elements of 2nd matrix :"<<endl;
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>b[i][j];
        }
    }
    int res[n][q];
    if(m==p){
        for(int i=0;i<n;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                for(int k=0;k<p;k++){
                    res[i][j]+=a[i][k]*b[k][j];
                }
            }
    }
    cout<<"multiplaction of matrix is :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<q;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    }

    }