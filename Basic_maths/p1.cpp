// #include<iostream>
// using namespace std;

// int digits(int n){
//     int count=0;
//     while(n>0){
//         count++;
//         n =n/10;
//     }
//     return count;
// }

// int main(){
//     cout<<digits(342131)<<endl;
//     return 0;
// }


#include<iostream>
using namespace std;

int digits(int n){
    int count = (int)(log10(n)+1);
    return count;
}

int main(){
    cout<<digits(353234421)<<endl;
    return 0;
}   