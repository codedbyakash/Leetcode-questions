#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter string :";
    getline(cin,s);
    int max=1;
    for(int i=0;i<s.length();i++){
        int count=1;
        char ch=s[i];
        for(int j=i+1;j<s.length();j++){
            if(s[i]==s[j]){
                count++;
            }
        }
        if(max<count){
        max=count;
    }
    }
    cout<<"maximum repeted charcter frequency is :"<<max<<endl;
    for(int i=0;i<s.length();i++){
        int count=1;
        char ch=s[i];
        for(int j=i+1;j<s.length();j++){
            if(s[i]==s[j]){
                count++;
            }
        }
        if(max==count){
       cout<<ch<<"-"<<max<<endl;
    }
    }
}