#include<iostream>
using namespace std;
int finde(int x,int n,int arr[]){
        bool flag=false;
        for(int i=0;i<n;i++){
            if(arr[i]==x){
                flag=true;
                return i;
            }
        }
}
int main(){
    int n;
    cout<<"Enter size of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter x value :"<<endl;
    cin>>x;
    cout<<finde(x,n,arr);
    // for(int i=0;i<n;i++){
    //     if(arr[i]==x){
    //         cout<<"element is present and whose index is :"<<i;
    //     break;
    //       }
    // }

}