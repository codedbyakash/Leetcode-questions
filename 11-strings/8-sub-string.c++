#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter string of even length :"<<endl;
    getline(cin,s);
    int n=(s.length())/2;
    cout<<"substring of "<<s<<" is :"<<s.substr(2,7);
    
}