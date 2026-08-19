#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main(){
    array<int,5> arr = {9,5,2,5,23};
    auto it = arr.begin();
    
    while(true){
        it = find_if(it,arr.end(),[](int n){
            return n % 2 != 0;
        });
        if(it == arr.end()){
            break;
        }
        cout<<*it<<" ";
        ++it;
    }
    cout<<endl;
    return 0;
}