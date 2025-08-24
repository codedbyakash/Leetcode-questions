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
    if(head==NULL)return;
    cout<<head->val<<" ";
    display(head->next);
}
void displayrevrse(Node* head){
    if(head==NULL)return;
    displayrevrse(head->next);
    cout<<head->val<<" ";
}
int main(){
Node* a=new Node(23);
Node* b=new Node(45);
Node* c=new Node(21);
Node* d=new Node(67);
Node* e=new Node(54);
a->next=b;
b->next=c;
c->next=d;
d->next=e;
//printing or display linkedlist element using recursive methode 
display(a);
cout<<endl;
displayrevrse(a);
}