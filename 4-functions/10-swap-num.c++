#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter value of a and b :";
    cin>>a>>b;
    cout<<"Before swaping :"<<a<<","<<b<<endl;

    // Method -1--- with extra variable
//     int temp=a;
//     a=b;
//     b=temp;
//     cout<<"After swaping "<<a<<","<<b;
// }

// method-2--- without extra variable

a=a+b;
b=a-b;
a=a-b;
cout<<"After swaping "<<a<<","<<b;
}