#include<iostream>
using namespace std;
void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a,b;
    cout<<"Enter value of 1st and 2nd numbers :";
    cin>>a>>b;
    cout<<"before swaping :"<<a<<","<<b<<endl;
    swap(&a,&b);
    cout<<"after swaping :"<<a<<","<<b;
}