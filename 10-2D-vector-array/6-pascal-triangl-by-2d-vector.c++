#include<iostream>
#include<vector>
using namespace std;
int main(){
    int numrows;
    cout<<"Enter number of rows :"<<endl;
    cin>>numrows;
    // generating 2D vectors 
    vector<vector<int>>v;
    for(int i=1;i<=numrows;i++){
        vector<int>a(i);
        v.push_back(a);
    }

    //  assigning values according to pascal triangle
    for(int i=0;i<numrows;i++){
        for(int j=0;j<=i;j++){
            if(j==0||j==i){
                v[i][j]=1;
            }
            else {
                v[i][j]=v[i-1][j]+v[i-1][j-1];
            }
        }
    }
    //  printing pascal triangle 
    for(int i=0;i<numrows;i++){
        for(int j=0;j<=i;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    }