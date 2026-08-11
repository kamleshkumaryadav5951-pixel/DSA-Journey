
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr = {3,7,1,8,4};
    arr.insert(arr.begin()+2,10);
    cout << arr.size();

    for(auto i:arr){
        cout<<" "<<i;
    }
    cout<<endl;
    return 0;


}