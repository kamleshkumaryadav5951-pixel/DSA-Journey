#include<iostream>
using namespace std;
int num=1;
void pattern(int n){
    for(int i=1; i<=n; i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num +=1;
        }
        cout<<endl;
    }
}

int main(){
    pattern(5);
    return 0;
}