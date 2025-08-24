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
class LinkedList{
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head=tail=NULL;
        size=0;
    }
void insertAthead(int val){
    Node* temp=new Node(val);
    if(size==0){
        head=tail=temp;
    }
    else{
        temp->next=head;
        head=temp;
    }
    size++;
}
void insertAttail(int val){
    Node* temp=new Node(val);
    if(size==0){
        head=tail=temp;

    }
    else{
        tail->next=temp;
        tail=temp;
    }
    size++;
}
void insertAtindex(int idx,int val){
    if((idx<0)||(idx>size)){
        cout<<"invallid index"<<endl;
        return;}
    else if(idx==0)insertAthead(val);
    else if(idx==size)insertAttail(val);
    else{
        // 1, traversal of temp node till index-1 
        Node* t=new Node(val);
        Node* temp=head;
        for(int i=1;i<=idx-1;i++){
            temp=temp->next;
        }
        // 2, putt the address of index node into temp and vice say versa
        t->next=temp->next;
        // 3, 
        temp->next=t;
        size++;
    }
}
void display(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

};
int main(){
LinkedList ll;
ll.insertAthead(34);
ll.insertAttail(21);
ll.insertAttail(12);
ll.insertAttail(21);
ll.insertAttail(90);
ll.display();
ll.insertAtindex(3,56);
ll.display();

}