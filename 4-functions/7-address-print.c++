#include<iostream>
using namespace std;
void addre(int x,int y){
    cout<<"Address of formal x is :"<<&x<<endl;
    cout<<"Address of formal y is :"<<&y;
}
int main(){
    int x,y;
    cout<<"Enter x and y values :";
    cin>>x>>y;
    cout<<"Address of actual x is :"<<&x<<endl;
    cout<<"Address of actual Y is :"<<&y<<endl;
    addre(x,y);
}