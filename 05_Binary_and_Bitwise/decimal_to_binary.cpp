// ==========================================
// Topic: Number Systems
// Pattern/Concept: Decimal to Binary Conversion
// ==========================================
#include<iostream>
using namespace std;
    int dectoBinary(int decNum){
    int ans = 0, pow= 1;

    while(decNum>0){
        int rem = decNum%2;
        decNum /=10;
        ans +=(rem*pow);
        pow = (pow*2);

    }
    return ans;
}
int main(){
    
    int decNum=100;
    cout<< dectoBinary(decNum)<<endl;
    return 0;
}
