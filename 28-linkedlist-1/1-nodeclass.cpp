#include<iostream>
#include<vector>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
int main(){
    //10 20 30 40
    Node a(10);
    // a.val=10;
    Node b(20);
    // b.val=20;
    Node c(30);
    // c.val=30;
    Node d(40);
    // d.val=40;
    //forming linkedlist
    a.next=&b;
    b.next=&c;
    c.next=&d;
    // cout<<a.next<<endl;
    // cout<<(((a.next)->next)->next)->val;
    Node temp=a;
    while(1){
        cout<<temp.val<<endl;
        if(temp.next==NULL)break;
        temp=*(temp.next);
    }
}