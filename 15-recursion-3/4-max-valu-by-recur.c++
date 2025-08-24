#include<iostream>
#include<vector>
#include<climits>
using namespace std;
// maxmimum value printing
void display(int n,int arr[],int idx,int max){
    if(idx==n) {
        cout<<max<<" ";
        return ;
    }
    if(arr[idx]>max) max=arr[idx];
    display(n,arr,idx+1,max);
}
// maximum value return
int maxinarray(int arr[],int n,int idx){
    if(idx==n)return INT_MIN;
    return max(arr[idx],maxinarray(arr,n,idx+1));
}
int main(){
    int n;
    cout<<"Enter size of array :"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter elements of array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=INT_MIN;
    // display(n,arr,0,max);
    cout<<"maximum value element in array is :"<<maxinarray(arr,n,0);
}