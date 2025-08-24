#include<iostream>
using namespace std;
void prdt(int* ptr1,int* ptr2){
    cout<<(*ptr1)*(*ptr2);
}
int main(){
    int a,b;
    cout<<"Enter 1st and 2nd number :"<<endl;
    int* ptr1=&a,*ptr2=&b;
    cin>>*ptr1>>*ptr2;
    // cout<<(*ptr1)*(*ptr2);
    prdt(ptr1,ptr2);
}