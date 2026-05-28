#include<iostream>
#include<vector>
using namespace std;
int main(){
    /*vector<int> vec={1,2,3};
    cout<<vec[2];
    vector<int>vec(5,0);
    cout<<vec[0]<<endl;
    cout<<vec[1]<<endl;
    cout<<vec[2]<<endl;
    cout<<vec[3]<<endl;
    cout<<vec[4]<<endl;*/

    vector<char>vec={'a','b','c','d'};
    for(char vec : vec){
        cout<<vec<<endl;
    }

    return 0;
}