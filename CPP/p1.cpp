#include<iostream>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    map<string,string> dict= {{"apple","apple is a fruit"},{"he","male"},{"array","it store multiple element , and it has fix size"},{"habit","your daily rutine"}};
    for(auto &i:dict){
        cout<<i.first<<" " <<":"<<i.second<<endl;
    }
    string searchWord;
    cout<<"\n Enter a word";
    cin>> searchWord;
    auto it = dict.find("serachWord");
    if(it != dict.end()){
        cout<<"meaning:"<<it->second<<endl;
    }
    else{
        cout<<"this word not in this dictonary"<<endl;
    }
    
}