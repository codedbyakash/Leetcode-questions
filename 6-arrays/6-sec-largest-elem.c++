#include<iostream>
#include<climits>
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
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int secmax=INT_MIN;;
    for(int i=0;i<n;i++){
        if((arr[i]>secmax)&&(arr[i]!=max)){
            secmax=arr[i];
        }
    }
    cout<<"Second maximum element value is :"<<secmax;
}