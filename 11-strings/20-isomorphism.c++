#include<iostream>
#include<vector>
using namespace std;
bool isomorphism(string s,string t){
    if(s.size()!=t.size())return false;
    vector<int>v(150,1000);
    for(int i=0;i<s.size();i++){
        int idx=(int)s[i];
        if(v[idx]==1000)v[idx]=s[i]-t[i];
        else if(v[idx]!=(s[i]-t[i]))return false;
    }
    return true;
    //emptying vector array
    for(int i=0;i<150;i++)
    v[i]=1000;
    for(int i=0;i<t.size();i++){
        int idx=(int)t[i];
        if(v[idx]==1000)v[idx]=t[i]-s[i];
        else if(v[idx]!=(t[i]-s[i]))return false;
    }
    return true;
}
int main(){
    string s;
    cout<<"Enter first string :";
    getline(cin,s);
    string t;
    cout<<"Enter second string :";
    getline(cin,t);
    if(isomorphism(s,t)==true)cout<<"yes, string "<<s<<" and "<<t<<" is isomorphism:";
    else cout<<"no, string "<<s<<" and "<<t<<" is not a isomorphism:";
}