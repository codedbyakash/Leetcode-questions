#include<iostream>
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
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
int size(Node* head){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
int main(){
Node* a=new Node(2);
Node* b=new Node(12);
Node* c=new Node(21);
Node* d=new Node(34);
Node* e=new Node(356);
a->next=b;
// (*a).next=b;
b->next=c;
c->next=d;
d->next=e;
display(a);
//printing size of linkedlist
cout<<endl<<"size of linked-list is :"<<size(a);
}