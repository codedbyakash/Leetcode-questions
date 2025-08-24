#include<iostream>
#include<vector>
using namespace std;
int main(){
//  vector<int>v(5,2);
 vector<vector<int>>v(3,vector<int>(4,3));
 for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
 }   
 cout<<v.size()<<endl; // number of rows
 cout<<v[0].size()<<endl; // number of columns in this row
 cout<<v[1].size()<<endl;
 cout<<v[2].size()<<endl;
 cout<<v[3].size()<<endl;
}