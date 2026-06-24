// ==========================================
// Topic: Conditionals
// Pattern/Concept: Check Upper/Lower Case
// ==========================================
#include<iostream>
using namespace std;

int main(){
    char ch;

    cout<< "enter character";
    cin >> ch;

    if(ch>= 'a' && ch<='z'){
        cout << "lower";

    }else{
        cout<< "upper";
    }

}