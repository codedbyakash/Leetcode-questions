#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter number of rows and columns :"<<endl;
    cin>>n>>m;
    vector<vector<int>>v(n,vector<int>(m));
    cout<<"Enter binary elements of matrix :"<<endl;
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>v[i][j];
    }
    }
    cout<<"2d vector elements is :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    // calculating binary numbers
    int sum=0;
    for(int i=0;i<n;i++){
        int x=1;
        for(int j=m-1;j>=0;j--){
            sum+=v[i][j]*x;
            x*=2;
        }
    }
    cout<<"the sum of all binary elements of matrix is :"<<endl<<sum<<" ";
}