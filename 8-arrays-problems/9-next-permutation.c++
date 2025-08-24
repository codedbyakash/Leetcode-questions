#include<iostream>
#include<vector>
using namespace std;
void nxtpermutation(vector<int>&v){
    int i=0;
    int j=v.size()-1;
    while(i<=j){

    }
}
int main(){
        int n;
        cout<<"Enter size of vector array :";
        cin>>n;
        vector<int>v;
        cout<<"Enter elements of vector array :"<<endl;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        nxtpermutation(v);
    }