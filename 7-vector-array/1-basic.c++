#include<iostream>
using namespace std;
void display(int n,int arr[]){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void change(int arr[]){
    arr[2]=45;
}
int main(){
    int n;
    cout<<"Enter array size :";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    display(n,arr);
    change(arr);
    display(n,arr);
}