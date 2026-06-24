// ==========================================
// Topic: Strings
// Pattern/Concept: String Basics
// ==========================================
#include<iostream>
using namespace std;
int main(){
    string str = "kamlesh yadav";
    // getline(cin,str);
    // for(int i = 0;i<str.length();i++){
    //     cout<<str[i]<<" ";
    // }

    for(char ch : str){
        cout<<ch<<" ";
    }
    cout<< endl;
    return 0;
}