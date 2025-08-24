// very very very important concept
#include<iostream>
using namespace std;
void pip(int n){
    if(n==0)return ;
    cout<<"pre "<<n<<endl;
    pip(n-1);
    cout<<"in "<<n<<endl;
    pip(n-1);
    cout<<"post"<<n<<endl;
}
int main(){
    int n;
    cout<<"Enter n value :"<<endl;
    cin>>n;
    pip(n);
}