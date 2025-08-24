#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    int a=n,b=n;
    int count=0;
    int sum=0;
    while(a>0){
        a/=10;
        count++;
    }
    while(b>0){
        int ld=b%10;
        int product=1;
        // for(int i=1;i<=count;i++){
        //     product*=ld;
        // }
        // sum+=product;

        sum+=pow(ld,count);
        b/=10;
    }
    if(n==sum){
        cout<<"given numer is armstrong :";
    }
    else{
        cout<<"Not a armstrong :";
    }
}