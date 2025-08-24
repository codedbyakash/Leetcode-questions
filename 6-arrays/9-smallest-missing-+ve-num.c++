#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements in array :";
    cin>>n;
    int arr[n];
    cout<<"Enter sorted assending number :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        int x=0;
        bool flag=false;
        for(int i=0;i<n;i++){
            if(arr[i]!=x){
                cout<<x<<" ";
                flag=true;
                break;
            }
            else{
                x++;
            }
        }
        if(flag==false){
            cout<<"number is not missing :";
        }
    }
}