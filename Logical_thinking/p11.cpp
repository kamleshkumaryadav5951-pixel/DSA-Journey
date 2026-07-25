#include<iostream>
using namespace std;

void pattern(int n){
    for(int i=0;i<=n;i++){
        char start = ('A'+ n -1)-i;
        for(char j=start ;j<=('A'+ n - 1);j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    pattern(5);
    return 0;
}