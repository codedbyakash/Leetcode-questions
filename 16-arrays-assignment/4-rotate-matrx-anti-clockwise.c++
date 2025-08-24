#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter number of rows and columns :";
    cin>>n>>m;
    vector<vector<int>>v(n,vector<int>(m));
    cout<<"Enter elements of 2d vector :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    //transpose 
    for(int i=0;i<n;i++){
        for(int j=i+1;j<m;j++){
            swap(v[i][j],v[j][i]);
        }
    }
    cout<<"matrix after transpose is :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int j=0;j<m;j++){
        int i=0,k=n-1;
        while(i<=k){
            swap(v[i][j],v[k][j]);
            i++;
            k--;
        }
    }
    cout<<"matrix after anti clockwise 90 degree rotation is :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}