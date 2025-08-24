// Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed values by 10.
//  Find the difference between the sum of elements at even indices to the sum of elements at odd indices.
#include<iostream>
#include<vector>
using namespace std;
void  changed(vector<int>&v){
    
    for(int i=0;i<v.size();i++){
        if(i%2==0){
            v[i]+=10;
        }
        else {
            v[i]*=2;
        }
    }
    cout<<"changed vector array is :"<<endl;

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
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
        changed(v);

    }