// Push zeroes to end while maintaining the
// relative order of other elements.
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
void sorting(vector<int>&v){ //selection sort 
    int n=v.size();
    int count=0;
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1){
            if(v[j]>=v[j-1])break;
            else{
                count++;
                swap(v[j],v[j-1]);
            }
            j--;
        }
    }
        cout<<"vector after insertion sort :"<<endl;
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl<<"total iterations:"<<count;
    }
int main(){
    int n;
    cout<<"Enter size of vector aray :"<<endl;
    cin>>n;
    cout<<"Enter elements of vector array :"<<endl;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sorting(v);
    
}
//T.C. =O(n^2) --->> worst case 
//T.C. =O(n^2) --->> Average case 
//T.C. =O(n) --->> Best case 
//  insertion sort is a stable sorting 