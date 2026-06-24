// ==========================================
// Topic: Pointers
// Pattern/Concept: Pointer Basics
// ==========================================
#include<iostream>
using namespace std;
int main(){
    // int arr[]={1,2,3,4,5};
    
    // cout<<*arr<<endl;
    /*int a=10;
    int* ptr=&a;
    cout<<ptr<<endl;
    ptr++;
    cout<<ptr<<endl;
    return 0;
    */
   int arr[]={1,2,3,4,5};
   int* ptr2;
   int* ptr1 = ptr2 + 2;
   
   cout<<ptr1 - ptr2<<endl;
}