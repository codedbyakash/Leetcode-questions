//  Find the difference between the sum of elements at even indices to the sum of elements at odd indices.
#include<iostream>
#include<vector>
using namespace std;
int diff(vector<int>&v){
    int n=v.size();
    int sum=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            sum+=v[i];
        }
        else {
            sum-=v[i];
        }
    }
    return sum;
}
int main(){
        int n;
        cout<<"Enter size :";
        cin>>n;
        vector<int>v;
        cout<<"Enter vector elements :"<<endl;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        cout<<"the difference between even and odd indices is:"<<diff(v);

    }