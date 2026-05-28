#include<iostream>
using namespace std;
int dectobinary(int decnum){
    int ans = 0 , pow = 1;
    while(decnum > 0){
        int rem = decnum%2;
        decnum = decnum/2;
        ans += (rem*pow);
        pow = (pow*10);
    }
    return ans;
}
int main(){
    
    cout<< dectobinary(9)<<endl;
    return 0;
}