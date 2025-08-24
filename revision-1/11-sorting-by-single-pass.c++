#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of vector array :"<<endl;
    cin>>n;
    vector<int>v;
    cout<<"Enter elements of vector array :"<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int i=0,j=n-1;
    while(i<j){
        if(v[i]==0)i++;
        else if(v[j]==1)j--;
        else {
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
    cout<<"sorted vector eleents is :"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}