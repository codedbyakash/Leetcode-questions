#include<iostream>
#include<vector>
using namespace std;
void change(int a[]){
    a[2]=45;
}
void change2d(int b[3][3]){
    b[2][1]=43;
}
int main(){
 int a[3]={1,2,3};
 cout<<a[2]<<endl;
 change(a);
 cout<<a[2]<<endl;
 int b[3][3]={{1,2,3},{4,5,6},{7,8,9}};
 cout<<b[2][1]<<endl;
 change2d(b);
cout<<b[2][1]<<endl;

}