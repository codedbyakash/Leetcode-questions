#include<iostream>
#include<string>
using namespace std;
int maze(int sr,int sc,int er,int ec){
    if(sr>er||sc>ec)return 0;
    else if(sr==er&&sc==ec)return 1;
    int rightways=maze(sr,sc+1,er,ec); //moving in right
    int downways=maze(sr+1,sc,er,ec);// moving in down
    int totalways=rightways+downways;
    return totalways;
}
int maze2(int er,int ec){
    if(er<1||ec<1)return 0;
    else if(er==1&&ec==1) return 1;
    int rightways=maze2(er,ec-1);
    int downways=maze2(er-1,ec);
    int totalways=rightways+downways;
    return totalways;
}
void  printpath(int sr,int sc,int er,int ec,string s){
    if(sr>er||sc>ec)return;
    else if(sr==er&&sc==ec){
        cout<<s<<endl;
        return;
    }
    printpath(sr,sc+1,er,ec,s+'R'); //moving in right
    printpath(sr+1,sc,er,ec,s+'D');// moving in down
    return ;
}
void printpath2(int er,int ec,string s){
    if(er<1||ec<1)return;
    else if(er==1&&ec==1){
        cout<<s<<endl;
    }
    printpath2(er,ec-1,s+'R');
    printpath2(er-1,ec,s+'D');
    return;
}

int main(){
int n;
cout<<"Enter number of rows :"<<endl;
cin>>n;
int m;
cout<<"enter number of columns :"<<endl; 
cin>>m;
//  by 4 variables

// cout<<"total number of ways is :"<<maze(1,1,n,m)<<endl;  
// printpath(1,1,n,m,"");

// same problem but by using on two variables
cout<<"total number of ways :"<<maze2(n,m)<<endl;
printpath2(n,m,"");
}