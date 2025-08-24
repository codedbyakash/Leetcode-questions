#include<iostream>
#include<vector>
using namespace std;
void sorted(vector<int>&v){
    int i=0;
    int j=v.size()-1;
    while(i<j){
        if(v[i]<0){
            i++;
        }
        else if(v[j]>=0){
            j--;
        }
        else{
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
    cout<<"Sorted vector array is :"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter size of vector array :"<<endl;
    cin>>n;
    vector<int>v;
    cout<<"Enter element of vector array :"<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
}
sorted(v);
}