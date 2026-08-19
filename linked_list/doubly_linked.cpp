#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d){
        this -> data =d;
        this -> prev = NULL;
        this -> next = NULL;
    }
};
//travese linked list
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data <<" ";
        temp = temp ->next;
    }
    cout<<endl;
}
//give length of linked list
int getLength(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp ->next;
    }
    return len;
}
void InsertAtHead(Node* &tail,Node* &head, int d){
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }
    
}
void InsertAtTail(Node* &tail,Node* &head, int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
        
    }
    else{
        Node* temp = new Node(d);
        tail->next= temp;
        temp -> prev = tail;
        tail = temp;
}
    }
    
void InsertAtPosition(Node* tail,Node* &head, int position, int d){
    //insert at starting
    if(position == 1){
        InsertAtHead(tail,head, d);
        return;
    }
    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1){
        temp = temp ->next;
        cnt++;
    }
    //insert at last position
    if(temp -> next == NULL){
        InsertAtTail(tail,head,d);
        return;
    }

    Node* NodeToInsert = new Node(d);
    NodeToInsert->next = temp -> next;
    temp ->next->prev = NodeToInsert;
    temp ->next = NodeToInsert;
}

int main(){
   //Node* Node1 = new Node(10);
    //Node* head = Node1;
    //Node* tail = Node1;

    Node* head = NULL;
    Node* tail = NULL;

   // print(head);
    //cout<<getLength(head)<<endl;
    InsertAtHead(tail,head, 11);
    print(head);
    //cout<<getLength(head)<<endl;
    InsertAtTail(tail,head,69);
    print(head);

    InsertAtPosition(tail,head,2,100);
    print(head);
    InsertAtPosition(tail,head,1,101);
    print(head);

    return 0;
}