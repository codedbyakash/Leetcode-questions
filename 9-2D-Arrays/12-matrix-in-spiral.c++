#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter number of rows and columns respectively :"<<endl;
    cin>>a>>b;
    int arr[a][b];
    cout<<"Enter elements of array :"<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr[i][j];
        }
cout<<endl;
    }
    int minr=0,mincol=0;
    int maxr=a-1,maxcol=b-1;
    int tne=a*b;
    int count=0;
    while(minr<=maxr&&mincol<=maxcol){
        // left to right
    for(int i=mincol;i<=maxcol&&count<tne;i++){
        cout<<arr[minr][i]<<" ";
        count++;
    } 
    minr++;
    // if(minr>maxr||mincol>maxcol)
    // break;
    // top to down
    for(int i=minr;i<=maxr&&count<tne;i++){
        cout<<arr[i][maxcol]<<" ";
        count++;
    } 
    maxcol--;
    // if(minr>maxr||mincol>maxcol)
    // break;
    // right to left
    for(int i=maxcol;i>=mincol&&count<tne;i--){
        cout<<arr[maxr][i]<<" ";
        count++;
    } 
    maxr--;
    // if(minr>maxr||mincol>maxcol)
    // break;
    // down to top
    for(int i=maxr;i>=minr&&count<tne;i--){
        cout<<arr[i][mincol]<<" ";
        count++;
    } 
    mincol++;
    // if(minr>maxr||mincol>maxcol)
    // break;
}
}