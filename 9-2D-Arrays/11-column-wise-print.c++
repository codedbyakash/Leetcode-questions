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
    for(int j=0;j<b;j++){
        if(j%2==0){
            for(int i=0;i<a;i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i=a-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}