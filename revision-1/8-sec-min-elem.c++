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

int min=INT_MAX;
// for(int i=0;i<n;i++){
//     if(arr[i]<min){
//     min=arr[i];
//     }
// }
// cout<<"first minimum element is :"<<max<<endl;
int secmin=INT_MAX;
// for(int i=0;i<n;i++){
//     if((arr[i]>secmin)&&(arr[i]!=min)){
//         secmin=arr[i];
//     }
// }
// cout<<"The second minimum element is :"<<endl;
// cout<<secmin;

//  In one pass
for(int i=0;i<n;i++){
    if(arr[i]<min){
        secmin=min;
        min=arr[i];
    }
    else if(arr[i]<secmin&&arr[i]!=min){
        secmin=arr[i];
    }

    }
    if(secmin==INT_MAX)
cout<<"The second minimum element is not present:"<<endl;
else
cout<<"Second minimum element is :"<<secmin;
}