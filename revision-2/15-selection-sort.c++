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
    for(int i=0;i<n;i++){
    int min=INT_MAX;
    int midx=-1;
    for(int j=i;j<n;j++){
        if(v[j]<min){
            min=v[j];
            midx=j;
        }
    }
    swap(v[i],v[midx]);

}
    cout<<"sorted vector element is :"<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    // cout<<endl<<count;
}