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
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]>max){
                max=v[i][j];
                smax=max;
            }
            else {
                smax=v[i][j];
            }
        }
    }
    cout<<"the maximum and seconfd maximum elements are respectively is :"<<max<<","<<smax;
}