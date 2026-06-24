// ==========================================
// Topic: Number Systems
// Pattern/Concept: Binary to Decimal Conversion
// ==========================================
#include<iostream>
using namespace std;

int BinaryTdec(int BiNum){
    int ans =0,  pow=1; //pow =1 -> 2^0

    while(BiNum>0){
        int rem = BiNum%10;
        BiNum /=10;
        ans += (rem*pow);

        pow*=2;

    }
    return ans;

}
int main(){
    int BiNum;
    cout <<"enter binar number"<<endl;
    cin >>BiNum;
    cout << "decimal is :" << BinaryTdec(BiNum) <<endl;
    return 0;
}