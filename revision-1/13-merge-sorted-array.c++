#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of 1st vector array :"<<endl;
    cin>>n;
    vector<int>v;
    cout<<"Enter elements of 1st sorted vector array :"<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int m;
    cout<<"Enter size of 2nd vector array :"<<endl;
    cin>>m;
    vector<int>u;
    cout<<"Enter elements of second sorted vector array :"<<endl;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        u.push_back(x);
    }
    vector<int>w(m+n);
    int i=0,j=0,k=0;
    while(i<=n-1&&j<=m-1){
        if(v[i]<u[j]){
            w[k]=v[i];
            k++;
            i++;
        }
    else{
            w[k]=u[j];
            k++;
            j++;
        }
    }
        while(j<m){
            w[k]=u[j];
            j++;
            k++;
        }
        while(i<=(n-1)){
            w[k]=v[i];
            i++;
            k++;
        }
    cout<<"merge sorted vector array is :"<<endl;
    for(int i=0;i<w.size();i++){
        cout<<w[i]<<" ";
    }

    }