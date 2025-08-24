#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter string :";
    getline(cin,s);
    reverse(s.begin(),s.begin()+1);
    cout<<"Reverse substring is :"<<s;
}