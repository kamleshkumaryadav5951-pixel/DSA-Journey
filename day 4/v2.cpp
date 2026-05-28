#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);//capacity double hoti hai size bas 1 badhta hai size double nhi hota
    cout<<vec.size() <<endl;
    cout<<vec.capacity()<<endl;
    

}

