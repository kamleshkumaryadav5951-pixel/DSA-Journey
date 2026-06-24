// ==========================================
// Topic: Number Systems
// Pattern/Concept: Binary to Decimal Conversion
// ==========================================
#include<iostream>
using namespace std;
int binarytodec(int binarynum){
    int ans = 0, pow = 1;
    while(binarynum > 0){
        int rem = binarynum%2;
        binarynum /= 10;
        ans += (rem*pow);
        pow = (pow * 2);

    }
    return ans;
}
int main(){
    cout<<binarytodec(100)<<endl;
    return 0;
}