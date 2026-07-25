#include<iostream>
using namespace std;

void pattern(int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<n-1;j++){
            if(j<=j/2) cout<<" ";
        }
        for(int j=0; j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    pattern(10);
    return 0;
}