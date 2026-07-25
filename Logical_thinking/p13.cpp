#include<iostream>
using namespace std;

void pattern(int n){
    int st = 0;
    for(int i=0; i<n;i++){
       for(int j=1;j<=n-i;j++){
        cout<<"*";
       } 
       for(int j=0;j< st;j++){
        cout<<" ";
       }
       for(int j=1; j<=n-i; j++){
        cout<<"*";
       }
       st = st + 2;
       cout<<endl;
    }

    st = 2*n - 2;

    for(int i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
        cout<<"*";
       } 
       for(int j=0;j<st;j++){
        cout<<" ";
       }
       for(int j=1;j<=i;j++){
        cout<<"*";
        
       }
       st = st - 2;
       cout<<endl;
  }
}

int main(){
    pattern(5);
    return 0;
}