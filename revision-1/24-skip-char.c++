#include<iostream>
#include<vector>
using namespace std;
void skipchar(string s,string str,int idx){
    if(idx==str.length()){
        cout<<"string after removing character a is :"<<s<<endl;
        return;
    }
    char ch=str[idx];
    if(ch=='a')skipchar(s,str,idx+1);
    else skipchar(s+ch,str,idx+1);
}
int main(){
    string s,str;
    cout<<"Enter string :";
    getline(cin,str);
    s="";
    skipchar(s,str,0);
}