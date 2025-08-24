#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter number of rows and columns :";
    cin>>n>>m;
    vector<vector<int>>v(n,vector<int>(m));
    cout<<"Enter elements of 2d vector array :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        int x=1;
        for(int j=m-1;j>=0;j--){
            sum+=v[i][j]*x;
            x*=2;
        }
}
cout<<"The sum of binomial numbers is :"<<endl<<sum;
}