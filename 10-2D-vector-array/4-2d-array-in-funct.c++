#include<iostream>
#include<vector>
using namespace std;
void change2d(int arr[][3]){
    arr[0][0]=100;
}
int main(){
    //  for passing 2d array in function you have to give size of both number of rows and columns
   int a[3]={1,2,3};
   int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
   cout<<arr[0][0];
   change2d(arr);
   cout<<endl<<arr[0][0]<<endl;

    

}