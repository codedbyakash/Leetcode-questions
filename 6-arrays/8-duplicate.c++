#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements in array :";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool flag=false;
    int elem;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                flag=true;
                elem=arr[j];
                break;
            }
        }
    }
    if(flag==true){
        cout<<"Douplicate element is present :"<<elem;
    }
    else{
        cout<<"duplicate element is not preesent :";
    }
}