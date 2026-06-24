// ==========================================
// Topic: Functions
// Pattern/Concept: Sum of Digits
// ==========================================
#include<iostream>
using namespace std;

int digitSum(int n){
    int sum  =0;

    while(n>0){
        int lastDig = n%10;
        n /=10;
        sum += lastDig;


    }
    return sum;
}
int main(){

    cout << digitSum(290);
}