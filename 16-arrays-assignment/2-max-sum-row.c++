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
    int max=INT_MIN,rownum=-1;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
           sum+=v[i][j]; 
        }
        if(max<sum){
        max=sum;
        rownum=i;
        }
    }
    
    cout<<"maximum sum of row elements row number is :"<<rownum<<" that sum is :"<<max;
}