#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
    string word;
    cin>> word;
    set<char> charStore;
    for(int i = 0; i<=word.size();i++){
        charStore.insert(word[i]);   
    }
}