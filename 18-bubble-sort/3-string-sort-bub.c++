#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sorting(string str){
    int n=str.size();
    int count=0;
    string s;
    for(int i=0;i<n;i++){
        if(str[i]>='x'){
            s.push_back(str[i]);
        }
    }
    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }
    for(int i=0;i<s.size()-1;i++){
        bool flag=true;
        for(int j=0;j<s.size()-1-i;j++){
            if(s[j]<s[j+1]){
                count++;
                swap(s[j],s[j+1]);
            }
        }
    }
    cout<<endl;
    cout<<"string after sorting :"<<endl;
    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }
}
int main(){
    string str;
    cout<<"Enter string :";
    getline(cin,str);
    sorting(str);
}