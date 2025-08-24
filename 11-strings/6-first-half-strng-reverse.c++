#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter string of even length:";
    getline(cin,s);
    int n=(s.length()/2);
    reverse(s.begin(),s.begin()+n);
    cout<<"Reverse string is :"<<s<<endl;
}