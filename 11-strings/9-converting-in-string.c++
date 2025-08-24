#include<iostream>
using namespace std;
int main(){
    string s;
    // cout<<"enter string :"<<endl;
    // getline(cin,s);
    int x;
    cout<<"Enter number :"<<endl;
    cin>>x;
    s=to_string(x);
    cout<<"Total number of digits in number is :"<<s.length();
}