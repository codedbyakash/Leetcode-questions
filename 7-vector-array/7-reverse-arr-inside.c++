#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter size :";
    cin>>n;
    cout<<"Enter elements of vector :"<<endl;
    vector<int>v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int i=0,j=v.size()-1;
    while(i<j){
// swaping with extra variable --method-1
// int temp=v[i];
// v[i]=v[j];
//  v[j]=temp;
// i++
// j--

//  swaping without extra variable ---method--2
        v[i]=v[i]+v[j];
        v[j]=v[i]-v[j];
        v[i]=v[i]-v[j];
        i++;
        j--;
    }
    cout<<"Reverse array is :"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}