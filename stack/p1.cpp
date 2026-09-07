#include<iostream>
#include<algorithm>
using namespace std;

class Stack{
    int arr[100];
    int top;
public:
    Stack(){
        top = -1;
    }
    void push(int val){
        if(top == 99){
            cout<<"overflow 💦💦💦💦\n";
            return;
        }
        top++;
        arr[top] = val;
    }
    void pop(){
        if(top == -1){
            cout<<"underflow 👇🏿\n";
            return;
        }
        top--;
    }
    void peek(){
        if(top == -1){
            cout<<" stack is empty🕳️\n";
            return -1;
        }
        return arr[top];
    }
    void isEmpty(){

    }
};

int main(){
    Stack st;
}