#include<iostream>
using namespace std;
void printing(int n){
    if(n==0)return;
    printing(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cout<<"Enter number :"<<endl;
    cin>>n;
    printing(n);
    }