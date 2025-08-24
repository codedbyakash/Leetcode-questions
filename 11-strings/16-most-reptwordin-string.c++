#include<iostream>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter string :";
    getline(cin,str);
    stringstream ss(str);
    string temp;
    vector<string>v;
    while(ss>>temp){
        v.push_back(temp);
    }
    cout<<endl;
    //before sorting words in vector
    // cout<<"words before sorting:"<<endl;
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<endl;
    // }
    sort(v.begin(),v.end());
    //after sorting vector words 
    //  cout<<"words after sorting:"<<endl;
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<endl;
    // }
    int maxcount=1,count=1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1])count++;
        else count=1;
        maxcount=max(maxcount,count);
    }
    count=1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1])count++;
        else count=1;
       if(count==maxcount){
        cout<<v[i]<<" "<<maxcount<<endl;
       }
    }
    
}