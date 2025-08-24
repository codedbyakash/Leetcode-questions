#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter string :";
    // cin>>s;// work only if string has no spaces
    getline(cin,s);
    cout<<s;
}