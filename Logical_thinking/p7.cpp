#include<iostream>
using namespace std;

void pattern(int n){
    for(int i=0; i <= n; i++){
        for(char j='A'; j<'A'+i; j++){
            cout<<j;
            
        }
        cout<<endl;
    }
}
int main(){
    pattern(4);
    return 0;
}