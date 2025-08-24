#include<iostream>
using namespace std;
void printing(int n){
    cout<<n<<endl;
    if(n==1)return;
    printing(n-1);
}
int main(){
    int n;
    cout<<"Enter number :"<<endl;
    cin>>n;
    cout<<"printing numbers is :"<<endl;
    printing(n);
}