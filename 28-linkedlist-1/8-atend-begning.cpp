#include<iostream>
using namespace std;
class Node{//user data type
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
void insertAtend(int val){
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
void insertAtbegning(int val){
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
ll.insertAtend(56);
ll.insertAtend(65);
ll.insertAtend(23);
ll.insertAtend(12);
cout<<ll.size<<endl;
ll.display();
ll.insertAtbegning(24);
ll.insertAtbegning(1);
ll.insertAtbegning(90);
ll.insertAtbegning(87);
ll.display();
cout<<endl<<ll.size<<endl;

}