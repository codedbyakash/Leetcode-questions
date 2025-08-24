#include<iostream>
using namespace std;
void starsquare(int n){
    cout<<"star square is :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
void numbersquare(int n){
    cout<<"number square is :"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void startringle(int n){
    cout<<"star triangle is :"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
void starreversetringle(int n){
    cout<<"star reverse triangle is :"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n+1-i);j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
void numbertringle(int n){
    cout<<"number triangle is :"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void numberreversetringle(int n){
    cout<<"number reverse triangle is :"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n+1-i);j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void oddnumbertringle(int n){
    cout<<"odd number triangle:"<<endl;
    for(int i=1;i<=n;i++){
        int value=1;
    for(int j=1;j<=i;j++){
        cout<<value<<" ";
        value+=2;
    }
    cout<<endl;
}
}
void oddreversenumbertringle(int n){
    cout<<"odd number triangle:"<<endl;
    for(int i=1;i<=n;i++){
        int value=1;
    for(int j=1;j<=(n+1-i);j++){
        cout<<value<<" ";
        value+=2;
    }
    cout<<endl;
}
}
void starplush(int n){
    cout<<"starplush triangle is :"<<endl;
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j==(n/2)||i==(n/2)){
                    cout<<"*";
                }
                else {
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
int main(){
    int n;
    cout<<"Enter number of rows :";
    cin>>n;
    starsquare(n);
    numbersquare(n);
    startringle(n);
    starreversetringle(n);
    numbertringle(n);
    numberreversetringle(n);
    oddnumbertringle(n);
    oddreversenumbertringle(n);
    starplush(n);
}