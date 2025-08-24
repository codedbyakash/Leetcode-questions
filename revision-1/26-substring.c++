#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter string :";
    getline(cin,s);
    int n=s.length()/4;
    cout<<s.substr(n);
}