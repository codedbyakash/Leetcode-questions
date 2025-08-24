#include<iostream>
#include<climits>
using namespace std;
int main(){
int n;
cout<<"Enteer size of array :"<<endl;
cin>>n;
int arr[n];
cout<<"Enter elements of array :"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}

// without one pass i mean by double pass

int max=INT_MIN;
// for(int i=0;i<n;i++){
//     if(arr[i]>max){
//     max=arr[i];
//     }
// }
// cout<<"first maximum element is :"<<max<<endl;
int secmax=INT_MIN;
// for(int i=0;i<n;i++){
//     if((arr[i]>secmax)&&(arr[i]!=max)){
//         secmax=arr[i];
//     }
// }
// cout<<"The second maximum element is :"<<endl;
// cout<<secmax;

//  In one pass
for(int i=0;i<n;i++){
    if(arr[i]>max){
        secmax=max;
        max=arr[i];
    }
    else if(arr[i]>secmax&&arr[i]!=max){
        secmax=arr[i];

    }
}
if(secmax==INT_MIN){
    cout<<"There is no second largest element ."<<endl;
}
else{
    cout<<"Second largest element is :"<<secmax;
}
}