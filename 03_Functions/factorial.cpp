// ==========================================
// Topic: Functions
// Pattern/Concept: Factorial
// ==========================================
#include<iostream>
using namespace std;

int factO(int n){
    int fact =1;

    for(int i =1; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    cout<<" factorial = "<< factO(3);
}