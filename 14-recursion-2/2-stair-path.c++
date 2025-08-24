#include<iostream>
using namespace std;
int stairpath(int n){
    if(n==2)return 2;
    else if(n==1) return 1;
    else if(n==3)return 4;
    // int stair =stairpath(n-1)+stairpath(n-2); ----for only 1 and 2 jumps

    // for 1 ,2 and 3 jumps code is :
    int stair=stairpath(n-1)+stairpath(n-2)+stairpath(n-3);//for 1 ,2 qnd 3 jumps
    return stair;
}
int main(){
int n;
cout<<"Enter number of stairs :"<<endl;
cin>>n;
cout<<"Total number of ways to climb "<<n<<" stairs is :"<<stairpath(n);   
}