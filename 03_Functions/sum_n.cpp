// ==========================================
// Topic: Functions
// Pattern/Concept: Sum of N Numbers
// ==========================================
#include<iostream>
using namespace std;

int sumN(int n){
    int sum= 0;

    for( int i =1; i<=n; i++){
        sum += i;
        
    }
    return sum;

}

int main(){
    cout << "sum = "<< sumN(3)<<endl;
    cout << "sum = "<< sumN(19)<<endl;
    cout << "sum = "<< sumN(90)<<endl;
    cout << "sum = "<< sumN(3)<<endl;
}