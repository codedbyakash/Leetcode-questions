#include<iostream>
#include<string>
using namespace std;
// without recursion

// string skipchar(string str,string s){
//     for(int i=0;i<str.size();i++){
//         if(str[i]!='a') s+=str[i];
//     }
//     return s;
// }

// with recursion
// this method space complexity is not good 

// void removechar(string s,string str){
//     if(str.length()==0){
//         cout<<s;
//         return;
//     }
//     char ch=str[0];
//     if(ch=='a')removechar(s,str.substr(1));
//     else removechar(s+ch,str.substr(1));
// }

void removechar(string s,string str,int idx){
    if(idx==str.length()){
        cout<<s;
        return;
    }
    char ch=str[idx];
    if(ch=='a')removechar(s,str,idx+1);
    else removechar(s+ch,str,idx+1);
}
int main(){
    string s,str;
    cout<<"Enter a string :";
    getline(cin,str);
    s="";
    removechar(s,str,0);
}