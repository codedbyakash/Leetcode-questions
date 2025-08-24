#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter string :"<<endl;
    getline(cin,s);
    sort(s.begin(),s.end());
    cout<<"sorted string is :"<<s;
}