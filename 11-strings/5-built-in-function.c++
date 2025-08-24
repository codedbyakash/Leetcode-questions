#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter string :"<<endl;
    getline(cin,s);
    cout<<"length of string is :"<<s.length()<<endl;
    // cout<<s.size();

    s.push_back('E');// by push  back we can only single character push back not like 'Eng'
    cout<<"string after push back is :"<<s<<endl;
    //  by this we can add character at end of string

    s.pop_back();// by this we can remove last indexed character
    cout<<s<<endl;

    // "+" operator
    cout<<s+" engine"<<endl;
    //  this inbuilt function append string at the end of string


    reverse(s.begin(),s.end());
    // reverse(s.begin()+2,s.end()-3);
    // reverse(s.begin()+3,s.begin()+7);
    cout<<"string after reverse is :"<<s<<endl;
     
}