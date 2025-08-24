#include<iostream>
using namespace std;
int main(){
    int n;
    // cout<<"Ente size of string :"<<endl;
    // cin>>n;
    string str="akash Yadav";

    // for(int i=0;i<n;i++){
    //     // cin>>str[i];
    //     getline(cin,str);
    // }
    int count=0;
    int i=0;
    while(str[i]!='\0'){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            count++;
        }
        i++;
    }
    cout<<"In given string total number of vowels is :"<<endl<<count;
}