#include<iostream>
using namespace std;
int numofdigit(int x){
    int ld,count=0;
    if(x==0){
        count=1;
        return count;
    }
    else{
    while(x>0){
        count++;
        x/=10;
    }
    return count;
}
}
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int a=numofdigit(n);
    cout<<"The square of number of digits is :"<<(a*a);
}