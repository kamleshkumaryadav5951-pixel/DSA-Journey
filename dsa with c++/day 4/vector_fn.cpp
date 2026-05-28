#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <char> vec = {'a','b','c'};
    /*for(char val : vec){
        cout<<val<<endl;
    }*/
    cout<<"size" <<vec.size()<<endl;
    vec.push_back(25);
    cout<<vec.size()<<endl;
    return 0;
}