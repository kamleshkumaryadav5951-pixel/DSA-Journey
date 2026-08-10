#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
int main(){
    array<int,5> marks ={60,35,89,50,95};
    sort(marks.begin(),marks.end());
    int average =0;
    
    for( auto i : marks){
        cout<<" "<< i<<"\n";
        average += i;
    }
    cout<< "avearge:"<<average/marks.size()<<endl;
    return 0;
}