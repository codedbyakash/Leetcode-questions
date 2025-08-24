#include<iostream>
#include<vector>
using namespace std;
int mazepath(int sr,int sc,int er,int ec){
    if(sr>er||sc>ec)return 0;
    else if(sr==er&&sc==ec) return 1;
    int rightmoves=mazepath(sr,sc+1,er,ec);
    int downmoves=mazepath(sr+1,sc,er,ec);
    int totalmoves=rightmoves+downmoves;
    return totalmoves;
}
int mazepath2(int er,int ec){
    if(er<0||ec<0)return 0;
    else if(er==0&&ec==0) return 1;
    int rightmoves=mazepath2(er,ec-1);
    int downmoves=mazepath2(er-1,ec);
    int totalmoves=rightmoves+downmoves;
    return totalmoves;
}
void mazepath3(int sr,int sc,int er,int ec ,string s){
    if(sr>er||sc>ec)return ;
    else if(sr==er&&sc==ec) {
        cout<<s<<endl;
    }
    mazepath3(sr,sc+1,er,ec,s+"R");
    mazepath3(sr+1,sc,er,ec,s+"D");
    return ;
}
int mazepath4(int er,int ec,string s){
    if(er<0||ec<0)return 0;
    else if(er==0&&ec==0){
        cout<<s<<endl;
        return 1;
    }
    return mazepath4(er,ec-1,s+"R")+ mazepath4(er-1,ec,s+"D");
}
int main(){
    int n,m;
    cout<<"Enter number of rows and columns :"<<endl;
    cin>>n>>m;
    // cout<<"total maze path is :"<<mazepath(0,0,n-1,m-1)<<" ways";
    // cout<<"total maze path is :"<<mazepath2(n-1,m-1)<<" ways";
    // mazepath3(0,0,n-1,m-1,"");
    cout<<mazepath4(n-1,m-1,"")<<endl;
}