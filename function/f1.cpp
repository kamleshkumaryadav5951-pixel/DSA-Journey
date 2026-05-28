#include<iostream>
using namespace std;

int minofTwo(int a , int b){
    if(a<b){
       return a;
}else{
    return b;
}
}

int main(){
    cout << "min = "<< minofTwo(5,6)<<endl;
    return 0;
    

}