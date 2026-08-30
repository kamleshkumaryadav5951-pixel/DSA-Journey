#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data){
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;
    }
    ~Node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout<<"memory is free from node with data"<<value <<endl;
    }
};
void InsertNode(Node* &tail, int element , int d){
    //empty list
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
        //non - empty list
        Node* curr = tail;

        while(curr -> data != element){
            curr = curr -> next;
        }
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}
void print( Node* tail){
    Node* temp = tail;
    //for empty list
    if(tail == NULL){
        cout<<"list is empty my brother!"<<endl;
        return;
    }
    do{
        cout<< tail -> data << " ";
        tail = tail -> next;
    }while(tail != temp);
    cout<<endl;
}
void deleteNode(Node* &tail, int value){
    //if node is empty
    if(tail == NULL){
        cout<<"list is empty !!"<<endl;
        return;
    }
    //non - empty
    else{
        Node* prev = tail;
        Node* curr = prev -> next;
        while(curr -> data != value){
            prev = curr;
            curr = curr -> next;
        }
        prev -> next = curr -> next;
        // 1 node linked list
        if(curr == prev){
            tail = NULL;
        }
        //>= 2 node linked list
        else if(tail == curr){
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
    }
}


int main(){
    Node* tail = NULL;

    InsertNode(tail,5, 3);
    print (tail);
    InsertNode(tail,3, 5);
    print (tail);
    // InsertNode(tail,5, 7);
    // print (tail);
    // InsertNode(tail,7, 9);
    // print (tail);
    // InsertNode(tail,9, 11);
    // print (tail);
    // InsertNode(tail,5, 6);
    // print (tail);
    // InsertNode(tail,3, 4);
    // print (tail);

    deleteNode(tail,3);
    print(tail);
    return 0;
}