#include<iostream>
using namespace std;
int main(){
    vector<int> arr1 = {2,9,3, 6,37};
    sort(arr1.begin(),arr1.end());
    cout<<arr1[arr1.size()-1]<<endl;
}