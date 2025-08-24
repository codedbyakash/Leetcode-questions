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
    for(int i=0;i<n;i++){
        int min=INT_MAX;
        int mindx=-1;
        for(int j=i;j<n;j++){
            if(v[j]<min){
                min=v[j];
                mindx=j;
            }
            count++;
        }
        swap(v[i],v[mindx]);

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
//T.C. =O(n^2)---->>Best Case
//T.C. =O(n^2)---->>Average Case
//T.C. =O(n^2)---->>worst Case
//  selection sort is a unstable sorting due to absence of adjacent swaping numbers
