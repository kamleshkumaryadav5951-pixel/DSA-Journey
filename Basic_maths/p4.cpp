#include<iostream>
#include <string>
#include <cmath>
using namespace std;

static bool ArmNum(int num){
    int k = to_string(num).length();
    int sum = 0;
    int n= num;

    while(n > 0){
        int ld = n % 10;
        sum += pow(ld,k);
        n /= 10;
    }
    return sum == num;
}

int main(){
    int num = 153;
    cout<<ArmNum(num)<<endl;
    return 0;
}