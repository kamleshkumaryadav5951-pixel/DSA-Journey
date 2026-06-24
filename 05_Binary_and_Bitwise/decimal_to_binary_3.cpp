// ==========================================
// Topic: Number Systems
// Pattern/Concept: Decimal to Binary Conversion
// ==========================================
#include<iostream>
using namespace std;

int decToBinary(int decNUM){
    int ans =0, pow=1;

    while(decNUM>0){
        int rem = decNUM%2;
        decNUM /=2;

        ans += (rem*pow);
        pow *=10;
    }
    return ans;
}
int main(){
    int decNUM = 25;
    cout << decToBinary(decNUM) <<endl;
    return 0;
}
