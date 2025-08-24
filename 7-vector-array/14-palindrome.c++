#include<iostream>
#include<vector>
using namespace std;
bool palindrome(vector<int>&v){
    bool flag=true;
    int i=0;
    int j=v.size()-1;
    while(i<j){
        if(v[i]!=v[j]){
            flag=false;
        }
        i++;
        j--;
    }
    return true;
}
int main(){
        int n;
        cout<<"Enter size :";
        cin>>n;
        vector<int>v;
        cout<<"Enter vector elements :"<<endl;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
    if(palindrome(v)){
        cout<<"given array is palindrome :";
    }
    else{
        cout<<"Given array is not a palindrome :" ;
    }
    }