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
    for(int i=0;i<b;i++){
        for(int j=i+1;j<a;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    cout<<"Transpose of matrix is :"<<endl;
    for(int i=0;i<b;i++){
        for(int j=0;j<a;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    }