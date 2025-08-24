#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter number of rows :";
   cin>>n;
   for(int i=0;i<=n;i++){
    int past=1;
    for(int j=0;j<=i;j++){
        cout<<past<<" ";
        past=(past*(i-j)/(j+1));
    }
    cout<<endl;
   }
}