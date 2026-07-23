#include<iostream>
using namespace std;

void pattern(int n){
    for(int i=0; i<n; i++){
        for(char j='A'; j<= 'A'+(n-i-1);j++){
            cout<<j;
        }
        cout<<endl;
    }
}
int main(){
    pattern(5);
    return 0;
}