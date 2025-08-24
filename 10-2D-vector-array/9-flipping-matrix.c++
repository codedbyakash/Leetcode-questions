#include<iostream>
#include<vector>
using namespace std;
int flipmatrix(vector<vector<int>>&v){
    int n=v.size();
    int m=v[0].size();
    //row flipping in matrix --->>
    for(int i=0;i<n;i++){
        if(v[i][0]=0){
        for(int j=0;j<m;j++){
            if(v[i][j]==0)v[i][j]=1;
            // else v[i][j]=0;
        }
    }
}
    // column flipping ---->>
    for(int j=0;j<m;j++){
        int noo=0,noz=0;
        for(int i=0;i<n;i++){
            if(v[i][j]==0)noz++;
            else noo++;
        }
        if(noz>noo){
            for(int i=0;i<n;i++){
                if(v[i][j]==0)v[i][j]=1;
                // else v[i][j]=0;
            }
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        int x=1;
        for(int j=0;j<m;j++){
            sum+=v[i][j]*x;
        x*=2;        
    }
    }
    return sum;
}
int main(){
    int n,m;
    cout<<"Enter number of rows and columns :"<<endl;
    cin>>n>>m;
    vector<vector<int>>v(n,vector<int>(m));
    cout<<"Enter elements of matrix :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    cout<<"sum of binary matrix is :"<<flipmatrix(v);
}