#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows :";
    cin>>n;
    vector<int>v;
    cout<<"Enter elements of vector array :";
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        v.push_back(x);
        }
        int x=1;
        int res=0;
        for(int i=n-1;i>=0;i--){
            res+=v[i]*x;
            x*=2;
        }
        cout<<"Sum of binary number is :"<<endl;
        cout<<res;
    }