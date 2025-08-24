#include<iostream>
using namespace std;
int main(){
    int x=6;
    int* ptr=&x;
    cout<<*ptr<<endl;
    *ptr=*ptr+1;
    cout<<*ptr<<endl;
}