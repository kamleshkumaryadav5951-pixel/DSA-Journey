// ==========================================
// Topic: Strings
// Pattern/Concept: Character Arrays
// ==========================================
#include<iostream>
using namespace std;

int main(){
    string str = "kamlesh"; //string is dynamic , runtime resize
    cout<<str<<endl;
    str = "kamlesh kumar yadav";
    cout<<str<<endl;

    char chAr[] = "kamlesh";
    cout<<chAr<<endl;

    chAr = "kamlesh kumar yadav"; //constant thing, can't change ate runtime



}