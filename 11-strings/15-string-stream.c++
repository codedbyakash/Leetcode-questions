#include<iostream>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;
int main(){
string str;
cout<<"Enter string :";
getline(cin,str);
stringstream ss(str);
string temp;
while(ss>>temp)
cout<<temp<<"\n";
}