#include<iostream>
using namespace std;

int FindGCD(int n1, int n2){
    int gcd = 1;
    for(int i=1; i<= min(n1,n2);i++){
        if(n1%i == 0 && n2%i==0){
            gcd = i;
        }
    }
    return gcd;
}

int main(){
    int gcd = FindGCD(9,12);
    cout<<gcd<<endl;
    return 0;
}