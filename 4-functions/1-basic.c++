#include<iostream>
using namespace std;
void triangl(int x){
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int a,b,c;
    cout<<"enter number of rows :";
    cin>>a>>b>>c;
    triangl(a);
    triangl(b);
    triangl(c);
}