#include<iostream>
#include<vector>
using namespace std;

// printing subsets of string without indexes using substring function
//    method-->1
// void stringsubsets(string s,string str){
//     if(s==""){
//         cout<<str<<endl;
//         return;
//     }
//     char ch=s[0];
//     stringsubsets(s.substr(1),str);
//     stringsubsets(s.substr(1),str+ch);

// }

    // method--->>2

// void stringsubsets2(string original,string ans,vector<string>&v){
//     if(original==""){
//         v.push_back(ans);
//         return;
//     }
//     char ch=original[0];
//     stringsubsets2(original.substr(1),ans+ch,v);
//     stringsubsets2(original.substr(1),ans,v);
// }

    //  method --->>3

// printing subsets of string by indexs 
void stringsubsets3(string s,string str,int idx){
    if(idx==s.size()){
        cout<<str<<endl;
        return;
    }
    char ch=s[idx];
    stringsubsets3(s,str,idx+1);
    stringsubsets3(s,str+ch,idx+1);

}
int main(){
    string s,str;
    cout<<"enter string :";
    getline(cin,s);
    str="";
    // stringsubsets(s,str);
    
    // vector<string>v;
    // stringsubsets(s,str,v);
    // cout<<"subset of string is :"<<endl;

            // string loop writing method

            // for(string ele :v){
            //     cout<<ele<<endl;
            // }

    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<endl;
    // }

    stringsubsets3(s,str,0);
}