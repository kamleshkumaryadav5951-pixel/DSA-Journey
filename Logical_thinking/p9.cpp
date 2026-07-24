#include<iostream>
using namespace std;

void pattern(int n){
    for(int i=0; i<n; i++){
        char ch = 'A'+i;
        for(char j=0;j<=i;j++){
            cout<<ch;
        }
        cout<<endl;
    }

}

int main(){
    pattern(5);
    return 0;
}