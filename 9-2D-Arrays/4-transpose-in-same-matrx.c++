#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter number of rows and columns respectively :"<<endl;
    cin>>a>>b;
    int arr[a][b];
    cout<<"Enter elements of array :"<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<b;i++){
        for(int j=i+1;j<a;j++){
            // cout<<arr[j][i]<<' ';
            swap(arr[i][j],arr[j][i]);
        }
        cout<<endl;
    }
    cout<<"transpose of matrix is :"<<endl;
    for(int i=0;i<b;i++){
        for(int j=0;j<a;j++){
            // cout<<arr[j][i]<<' ';
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    }