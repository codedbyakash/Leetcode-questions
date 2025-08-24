#include<iostream>
using namespace std;
void traversing(int n,int arr[],int i){
    if(i>=n)return;
    cout<<arr[i]<<" ";
    traversing(n,arr,i+1);
}
int main(){
    int n;
    cout<<"enter size of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    traversing(n,arr,0);
}