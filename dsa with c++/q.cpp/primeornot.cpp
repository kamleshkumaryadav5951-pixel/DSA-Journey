#include<iostream>
using namespace std;

int main(){

    int n;
    bool isPrime = true;
    cin>> n;


    for(int i = 2; i <= n-1; i++){
        if(n%i == 0){
            isPrime = false;
            break;
        }

    }
    if(isPrime == true){
        cout << "prime";

    }else{
        cout<<"not prime";
    }
    
}