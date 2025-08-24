#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements :";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"size of array is :"<<size;
}

//  memory allocation in array is continous 