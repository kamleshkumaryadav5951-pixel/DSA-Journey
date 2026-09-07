#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v1 = {100,95,35,76,89};
    vector<int> v2(v1.size());

    transform(v1.begin(),v1.end(),v2.begin(), [](int dis){})
}
