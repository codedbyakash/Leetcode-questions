// Push zeroes to end while maintaining the
// relative order of other elements.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sorting(vector<int>&v){
    int n=v.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(v[j]==0){
                swap(v[j],v[j+1]);
            }
        }
    }
    cout<<"vector array after sorting is :"<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter size of vector aray :"<<endl;
    cin>>n;
    cout<<"Enter elements of vector array :"<<endl;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sorting(v);
    
}