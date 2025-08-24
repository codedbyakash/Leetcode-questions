#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter day number  :"<<endl;
    cin>>n;
    switch(n){
        case 1:
        cout<<"monday :";
        break;
        case 2:
        cout<<"Tuesday :";
        break;
        case 3:
        cout<<"Wednesday :";
        break;
        case 4:
        cout<<"Thrusday :";
        break;
        case 5:
        cout<<"Friday :";
        break;
        case 6:
        cout<<"Saturday :";
        break;
        case 7:
        cout<<"sunday :";
        break;
        default:
        cout<<"Invallid number :";
    }
    
}