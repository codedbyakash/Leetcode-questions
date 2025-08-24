#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter number of rows and columns respectively :"<<endl;
    cin>>a>>b;
    int arr[a][b];
    cout<<"Enter elements of 1st array :"<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr[i][j];
        }
cout<<endl;
    }
    int n,m;
    cout<<"Enter number of rows and columns of 2nd matrixrespectively :"<<endl;
    cin>>n>>m;
    int arr1[n][m];
    cout<<"Enter elements of 2nd array :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr1[i][j];
        }
cout<<endl;
    }
    if((a==n)&&(b==m)){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                arr[i][j]+=arr1[i][j];
            }
        }
    }
     else{
            cout<<"sum of matrix is not possible :";
        }
       cout<<"Here is sum of matrix is :"<<endl;
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
cout<<endl;
    } 
    }