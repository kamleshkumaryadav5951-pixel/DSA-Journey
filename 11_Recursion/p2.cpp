#include<iostream>
using namespace std;

void f(int n){
    cout<< "F("<<n<<")'s Stack Frame Pushed\n";
    if(n > 1){
        f(n-1);
        f(n-1);
    }
    cout<< "F("<<n<<")'s Stack Frame removed\n";
}

int main(){
    f(3);
    return 0;
}