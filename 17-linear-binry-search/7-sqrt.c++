#include<iostream>
#include<vector>
using namespace std;
int squreroot(long long x){
    long long lo=0,hi=x;
    while(lo<=hi){
        long long mid=lo+(hi-lo)/2;
        if(mid*mid==x)return mid;
        else if(mid*mid<x)lo=mid-1;
        else hi=mid-1;
    }
    return hi;
}
int main(){
 long long n;
 cout<<"Enter value :";
 cin>>n;
 cout<<"squre root of "<<n<<" is :"<<squreroot(n);
}