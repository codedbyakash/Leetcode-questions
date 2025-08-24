#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int count=1,sum=0;
    while(count<=n){
        sum+=count;
        count++;
    }
    cout<<"The dum from 1 to "<<n<<" is :"<<sum;
}