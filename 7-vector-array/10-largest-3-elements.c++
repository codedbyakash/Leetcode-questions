#include<iostream>
#include<vector>
#include<climits>
using namespace std;
// int largest(vector<int>&v){
//     int first=INT_MIN,sec=INT_MIN,third=INT_MIN;
//     for(int i=0;i<v.size();i++){
//         if(v[i]>first){
//             third=sec;
//             sec=first;
//             first=v[i];
//         }
//         else if((v[i]>sec)&&(v[i]!=first)){
//             third=sec;
//             sec=v[i];
//         }
//         else if((v[i]>third)&&(v[i]!=sec)&&(v[i]!=first)){
//             third=v[i];
//         }
//         cout<<"The first,second  and third largest elements respectively is :"<<first<<","<<sec<<","<<third;
//         return ;
// }
int main(){
    int n;
    cout<<"Enter size :";
    cin>>n;
    cout<<"Enter elements of vector :"<<endl;
    vector<int>v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    // largest(v);

    int first=INT_MIN;
    int sec=INT_MIN;
    int third=INT_MIN;
    for(int i=0;i<v.size();i++){
         if(v[i]>first){
            third=sec;
            sec=first;
            first=v[i];
        }
        else if((v[i]>sec)&&(v[i]!=first)){
            third=sec;
            sec=v[i];
        }
        else if((v[i]>third)&&(v[i]!=sec)&&(v[i]!=first)){
            third=v[i];
        }
    }
    cout<<"The three largest three elements in array is :"<<first<<","<<sec<<","<<third;
}