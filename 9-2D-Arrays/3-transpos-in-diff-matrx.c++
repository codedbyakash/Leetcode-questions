#include<iostream>
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
cout<<endl;
    }
    int arr1[a][b];
    for(int i=0;i<b;i++){
        for(int j=0;j<a;j++){
            arr1[i][j]=arr[j][i];
        }
    }
    cout<<"Transpose of matrix is :"<<endl;
     for(int i=0;i<b;i++){
        for(int j=0;j<a;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    }