#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main(){
    array<int,5> arr = {7,3,2,8,4,};
    sort(arr.begin(),arr.end());
    
    for(int i=0; i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
