#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int num=n,m=n;
    // first calculating number of digits 
    int ld,count=0;
    while(n>0){
        n/=10;
        count++;
    }
    cout<<"number of digits :"<<count;
    int sum=0;
    while(m>0){
        ld=m%10;
     int   product=1;
    for(int i=1;i<=count;i++){
        product*=ld;
    }
    sum+=product;
    m/=10;
}
if(num==sum)
cout<<endl<<"the sum of digits in number :"<<sum;
else {
    cout<<endl<<"the sum of digits in number are not equal ";
}
}