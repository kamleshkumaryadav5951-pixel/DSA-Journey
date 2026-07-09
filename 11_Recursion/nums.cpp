#include<iostream>
using namespace std;

void printNumber(int n){
    if(n == 1){
        cout<<"1\n";
        return;
    }
        cout<<n<<" ";
        printNumber(n-1);
    }

int main(){
    printNumber(4);
    return 0;

}