#include<iostream>
#include<vector>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string :";
    getline(cin,str);
    //string to integer
    int x=stoi(str);
    cout<<x+4<<endl;

    // string to long long data type
    string st;
    cout<<"Enter string:";
    getline(cin,st);
    long long b=stoll(st);
    cout<<b<<endl;


    // integer to string
    int a;
    cout<<"Enter integer:";
    cin>>a;
    string s=to_string(a);
    cout<<s;
    }