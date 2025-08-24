#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter number of rows and columns of 1st matrix :"<<endl;
    cin>>a>>b;
    int arr1[a][b];
    cout<<"Enter elements of 1st matrix :"<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr1[i][j];
        }
cout<<endl;
    }
    int n,m;
    cout<<"enter number of rows and columns in 2nd matrix :"<<endl;
    cin>>n>>m;
    int arr2[n][m];
    cout<<"Enter elements of 2nd matrix :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr2[i][j];
        }
    }
    int res[a][m];
    if(b==n){
        for(int i=0;i<a;i++){
            for(int j=0;j<m;j++){
                res[i][j]=0;
            for(int k=0;k<b;k++){  
                res[i][j]+=arr1[k][j]*arr2[i][k];
            }
        }
    }
    cout<<"multiplaction of matrix is :"<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<m;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}
    }