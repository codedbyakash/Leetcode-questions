#include<iostream>
#include<climits>
using namespace std;
int maxvalue(int n,int arr[]){
    int max=INT_MIN;
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int n;
    cout<<"Enter number of elements in array :";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"maximum element value :"<<maxvalue(n,arr);
    
    //without function used

    // int max=arr[0];
    // int max=INT_MIN;
    // for(int i=1;i<n;i++){
    //     if(arr[i]>max){
    //         max=arr[i];
    //     }
    // }
    // cout<<"Maximum element value in array is :"<<max;
}