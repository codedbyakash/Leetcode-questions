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
    //delete element from head of linkedlist
    void deleteAthead(int idx){
        if(size==0){
            cout<<"linkedlist is empty :";
            return;
        }
        else if((idx<0)||(idx>size)){
            cout<<"invallid index :";
            return ;
        }
        else{
            head=head->next;
            size--;
        }

    }
    //delete from tail
    void deleteAttail(int idx){
        if(size==0){
            cout<<"linkedlist is empty :";
            return;
        }
        else if((idx<0)||(idx>size)){
            cout<<"invallid index :";
            return ;
        }
        else{
            //travelling temp
            Node* temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            temp->next=NULL;
            tail=temp;
            size--;
        }

    }
    // delete elemnt from mid index in linkedlist
    void deletemidindex(int idx){
        if(size==0){
            cout<<"linkedlist is empty :";
            return;
        }
        else if((idx<0)||(idx>size)){
            cout<<"invallid index :";
            return;
        }
        else if(idx==0)deleteAthead(idx);
        else if(idx==(size-1)) deleteAttail(idx);
        else{
            Node* temp=head;
            for(int i=1;i<=(idx-1);i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
        }
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
ll.deleteAthead(0);
ll.display();
ll.deleteAttail(4);
ll.display();
ll.deletemidindex(2);
ll.display();
}