// strings are basically char array
#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter string :"<<endl;
    getline(cin,s);
    // int n=s.length();
    int n=s.size();
    for(int i=0;i<n;i++){
        if(i%2==0){
            s[i]='a';
        }
    }
    cout<<"update string is :"<<s;
}
    
// if in between char array '\0' comes then terminal stop reading code
// like str[]={'a','b','\0','c','d'}
// output ---->> is a,b