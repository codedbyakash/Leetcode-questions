#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of vector array :";
    cin>>n;
    vector<vector<int>>v;
    for(int i=1;i<n;i++){
        for(int j=0;j<=i;j++){
            vector<int>a(i);
            v.push_back(a);
        }
    }
    // for row fliping 
    for(int i=0;i<n;i++){
        for(int j=0;j<=v[i].size();j++){
            if(j<=v[i].size()/2&&v[i][j]==0)
            v[i][j]=1;
        }
    }
    // for column fliping 
    int noz=0,noo=0;
    for(int j=0;j<v[0].size();j++){
        for(int i=0;i<v.size();i++){
            if(v[j][i]==0)noz++;
            else noo++;
        }
}
for(int j=0;j<v[0].size();j++){
        for(int i=0;i<v.size();i++){
            if(noz>noo){
                // flip
                
            }
            else noo++;
        }
}

}