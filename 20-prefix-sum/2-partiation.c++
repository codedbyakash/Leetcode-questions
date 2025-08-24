#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of vector array :";
    cin>>n;
    vector<int>v;
    cout<<"enter vector elements :"<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    // formation of prefix sum
   for(int i=1;i<n;i++) {
    v[i]+=v[i-1];
   }
//    check if any x exists
int idx=-1;
for(int i=1;i<n;i++){
    if(2*(v[i])==v[n-1]){
        idx=i;
        break;
    }
}
if(idx!=-1)cout<<"yes,it can be partioned after "<<idx<<"th index ";
else cout<<"- no ,partioned is not possible";
}