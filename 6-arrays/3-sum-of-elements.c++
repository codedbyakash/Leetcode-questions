#include<iostream>
using namespace std;
int sume(int n,int arr[]){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    
    return sum;
}
int main(){
    int n;
    cout<<"Enter number of array elements :"<<endl;
    cin>>n;
    cout<<"Enter elements of array :"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The sum of elements is :"<<sume(n,arr);
}
    // int sum=0;
    // for(int i=0;i<n;i++){
    //     sum+=arr[i];
    // }
    // cout<<"The sum of elements is :"<<sum;
    // }