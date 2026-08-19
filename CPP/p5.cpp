#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string sambhav= "sambhav is a good boy" ;

    transform(sambhav.begin(),sambhav.end(),sambhav.begin(),[](char c){
        return toupper(c);
    });
    cout<<sambhav<<endl;
}
