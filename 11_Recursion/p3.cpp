#include<iostream>
using namespace std;

int rev(int n){
    int arr[n];
    if(n > 5){
        return;
    }
    rev(arr[n-1]);
}
int main(){
    cout<<rev(0)<<endl;
    return 0;
}