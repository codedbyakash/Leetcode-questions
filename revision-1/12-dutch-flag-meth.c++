#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of vector array :"<<endl;
    cin>>n;
    vector<int>v;
    cout<<"Enter elements of vector array :"<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int lo=0,mid=0,hi=n-1;
    while(mid<hi){
        if(v[mid]==0){
            swap(v[lo],v[mid]);
            lo++;
            mid++;
        }
        else if(v[mid]==2){
            swap(v[mid],v[hi]);
            mid++;hi--;
        }
        else{
            mid++;
        }
    }
    cout<<"sortedd vector array is :"<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
}
}