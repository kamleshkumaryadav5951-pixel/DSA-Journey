// ==========================================
// Topic: Number Systems
// Pattern/Concept: Decimal to Binary Conversion
// ==========================================
#include<iostream>
using namespace std;

int decToBinary(int decNUM){
    int ans =0, pow =1;

    while(decNUM >0){
        int rem = decNUM%2;
        decNUM /=2;

        ans += (rem*pow);
        pow *=10;

    }
    return ans;
}
int main(){
    int decNUM = 35;
    for(int i=1; i<10;i++){
        
    
    cout << decToBinary(i) <<endl;
    }

    return 0;
}