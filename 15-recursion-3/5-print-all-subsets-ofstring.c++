#include<iostream>
#include<vector>
using namespace std;
void stringsubsets2(string original,string ans,vector<string>&v,bool flag){
    if(original==""){
        v.push_back(ans);
        return;
    }
    char ch=original[0];
    if(original.length()==1){
        if(flag==true)stringsubsets2(original.substr(1),ans+ch,v,true);
        stringsubsets2(original.substr(1),ans,v,true);
        return; //taaki neeeche ki do conditions na chale
    }
    char dh=original[1];
    if(ch==dh){
        if(flag==true)stringsubsets2(original.substr(1),ans+ch,v,true);
        stringsubsets2(original.substr(1),ans,v,false);
    }
    else {
        if(flag==true)stringsubsets2(original.substr(1),ans+ch,v,true);
        stringsubsets2(original.substr(1),ans,v,true);
    }
}
int main(){
    string s,str;
    cout<<"enter string :";
    getline(cin,s);
    str="";
    vector<string>v;
    stringsubsets2(s,str,v,true);
    cout<<"subset of string is :"<<endl;

            // string loop writing method

            // for(string ele :v){
            //     cout<<ele<<endl;
            // }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}