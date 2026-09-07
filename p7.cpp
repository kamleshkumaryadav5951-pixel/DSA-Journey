#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> marks = {89,75,90,84,45};
    cout<<"original marks\n"<<endl;
    for(int mark:marks){
        cout<<mark << " ";
    }
    auto partitionPoint = partition(marks.begin(),marks.end(),[](int mark){
        mark > 75;
    });
    for(auto it=marks.begin(); it != partitionPoint;++it){
        cout<<*it;
    }
    for(auto it=partitionPoint; it !=marks.end();++it){
        cout<<*it;
    }
}