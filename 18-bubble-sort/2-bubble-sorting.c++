#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sorting(vector<int>&v){
    int n=v.size();
    //bubble sort 

    // for(int i=0;i<n-1;i++){ //n-1 passes
    //     //traversing
    //     for(int j=0;j<n-1-i;j++){
    //      if(v[j+1]<v[j])
    //         swap(v[j],v[j+1]);
    //     }
    // }
    // cout<<"after sorting :"<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }

    //bubble sort optimized

    int count=0;
    for(int i=0;i<n-1;i++){ //n-1 passes
        //traversing
        bool flag=true;
        for(int j=0;j<n-1-i;j++){
            if(v[j+1]<v[j]){
                count++;
                swap(v[j],v[j+1]);
                flag=false;
            }
        }
        if(flag==true){// swap did not happen
            break;
        }
    }
    cout<<endl<<"after sorting :"<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl<<"total iterations :"<<count;
}
int main(){
    int n;
    cout<<"Enter size of array :";
    cin>>n;
    vector<int>v;
    cout<<"Enter elements of vector  array :";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<endl<<"without sorting :"<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    sorting(v);
}
//  T.C.=O(n)--->> Best case
// T.C.=O(n^2)--->> Avg. case
// T.C.=O(n^2)--->> Worst case
//  stable sorting 