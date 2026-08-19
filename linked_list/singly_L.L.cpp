#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    //constructor create karte hai
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
void InsertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}
void InsertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next =temp;
    tail = temp;
}
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){
    Node* head = new Node(10);
    // print(head);
    Node* tail = head;
    // cout<<"print head wise"<<endl;
    // InsertAtHead(head,15);
    // InsertAtHead(head,20);
    // InsertAtHead(head,25);
    // InsertAtHead(head,30);
    // print(head);
    
    cout<<"print tail wise"<<endl;
    InsertAtTail(tail,15);
    InsertAtTail(tail,20);
    InsertAtTail(tail,25);
    InsertAtTail(tail,30);
    InsertAtTail(tail,35);
    print(head);
    return 0;
}