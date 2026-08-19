#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
//constructor
    node(int data){
        this -> data = data;
        this -> next = NULL;
    }
//destructor
    ~node(){
        int value = this->data;
        //memory free
        if(this->next != NULL){
            delete next;
            this->next= NULL;
        }
        cout<<"memory is free for node with data"<<value<<endl;
    }

};
void InsertAtHead(node* &head, int d){
    node* temp = new node(d);
    temp -> next = head;
    head = temp;
}
void InsertAtTail(node* &tail, int d){
    node* temp = new node(d);
    tail->next=temp;
    tail = temp;
}
void print(node* &head){
    node* temp =head;
    while(temp != NULL){
        cout<<temp ->data<<" ";
        temp = temp ->next;
    }
    cout<<endl;
}
void InsertAtPosition(node* &tail,node* &head, int position , int d){
    if(position == 1){
        InsertAtHead(head,d);
        return;
    }
    node* temp = head;
    int cnt = 1;
    while(cnt < position - 1){
        temp = temp ->next;
        cnt++;
    }
    if(temp -> next == NULL){
        InsertAtTail(tail,d);
            return;
    }
    node* nodeToInsert = new node(d);

    nodeToInsert ->next = temp->next;
    temp ->next=nodeToInsert;
}
void deletNode(int position, node* &head){
    //deteting 1st or star node
    if(position == 1){
        node* temp = head;
        head = head->next;
        //free first memory;
        temp ->next=NULL;
        delete temp;
    }
    else{
        //delete middle or last
        node* curr = head;
        node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev ->next= curr->next;
        curr -> next = NULL;
        delete curr;

    }
}

int main(){

    //create new node
    node* node1 = new node(10);
    //cout<<node1 -> data<<endl;
    //cout<<node1 -> next<<endl;

    //head pointed to node
    node* head = node1;
    node* tail = node1;
    print(head);
    InsertAtTail(tail, 12);
    //print(head);
    InsertAtTail(tail, 15);
    //print(head);
    InsertAtTail(tail, 17);
    //print(head);
    InsertAtTail(tail, 19);
    print(head);
    InsertAtPosition(tail,head,1,23);
    print(head);
    cout<<"head:"<< head->data<<endl;
    
    cout<<"tail:"<< tail->data<<endl;

    deletNode(6,head);
    print(head);

    cout<<"head:"<< head->data<<endl;
    
    cout<<"tail:"<< tail->data<<endl;

    return 0;
}
