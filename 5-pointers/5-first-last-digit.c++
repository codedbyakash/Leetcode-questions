//important and conceptual question
#include<iostream>
using namespace std;
void find(int n,int* ptr1,int*ptr2){
    *ptr2=n%10;
    while(n>9){
        n/=10;
    }
    *ptr1=n;
    return;
}
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int firstdigit,lastdigit;
    int*ptr1=&firstdigit;
    int*ptr2=&lastdigit;
    find(n,ptr1,ptr2);
    cout<<"first digit of number is :"<<*ptr1<<endl;
    cout<<"last digit of number is :"<<*ptr2;
}