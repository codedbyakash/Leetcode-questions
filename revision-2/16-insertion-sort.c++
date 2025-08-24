#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array :";
    cin>>n;
    vector<int>v;
    cout<<"enter elements of vector array :";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int count=0;
    for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=0;j<n-1;j++){
            if(v[j]>v[j+1]){
                flag=false;
                count++;
                swap(v[j],v[j+1]);
            }
        }
        if(flag==true)break;
    }
    cout<<"sorted vector element is :"<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl<<count;
}