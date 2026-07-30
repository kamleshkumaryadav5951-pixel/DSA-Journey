#include<iostream>
using namespace std;

bool prime(int n){
    int cnt = 0;
    for(int i=1;i<n;i++){
        if(n%2 !=0){
        cnt++;
    }
    }
    
   if(n==2){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    cout<<prime(5)<<endl;
    return 0;
}