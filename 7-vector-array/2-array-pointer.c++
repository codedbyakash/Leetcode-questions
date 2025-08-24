#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter array size :";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int* ptr=arr;
    for(int i=0;i<n;i++){
        cout<<*ptr<<" ";
        *ptr++;
    }
}