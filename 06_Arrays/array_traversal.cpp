// ==========================================
// Topic: Arrays
// Pattern/Concept: Array Basics
// ==========================================
#include<iostream>
using namespace std;
int main(){
    int marks[]={54,67,98,46};
    int sz= sizeof(marks);
    int size = 4;
    for(int i = 0; i < size; i++){
        cout<<marks[i]<<" ";
    }
}