#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter string s :"<<endl;
    getline(cin,s);
    string t;
    cout<<"Enter string t :"<<endl;
    getline(cin,t);
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t){
        cout<<"yes these strings are anagram :";
    }
    else {
        cout<<"No these strings are no anagram :";
    }
}