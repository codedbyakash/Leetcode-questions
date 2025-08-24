#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of string array :";
    cin>>n;
    string str[n];
    cout<<"Enter string elements in array :";
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    int max=stoi(str[0]), idx=0;
    for(int i=1;i<n;i++){
        if(stoi(str[i])>max){
            max=stoi(str[i]);
            idx=i;
        }
    }
    cout<<"maximum value string is :"<<max <<endl<<"and that index number is :"<<idx;
}