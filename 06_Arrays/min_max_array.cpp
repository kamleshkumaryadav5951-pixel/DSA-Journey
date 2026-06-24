// ==========================================
// Topic: Arrays
// Pattern/Concept: Find Min/Max in Array
// ==========================================
#include<iostream>
using namespace std;
int main(){
    int num[]={56,78,4,-9,67};
    int size = 5;
    int smallest = INT_MAX;

    for(int i=0;i<size;i++){
        if(num[i]<smallest)
        smallest = num[i];

    }
    cout<<"smallest " << smallest  <<endl;

}