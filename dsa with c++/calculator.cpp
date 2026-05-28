#include<iostream>
using namespace std;

int main(){
    int a,b;
    char op;

    cout <<"enter operation: ";
    cin >> a >> op >> b;

    if( op =='+')
        cout << "result: "<< (a+b)<<endl;
    else if( op =='-')
        cout <<"result: "<< (a-b)<<endl;
    else if ( op =='*')
        cout <<"result: "<< (a*b)<<endl;
    else if (op =='/')
        cout <<"result: " << (a/b)<<endl;
    else if(op == '%')
        cout <<"result: "<<(a%b);
    else
        cout <<"invaild"<<endl<<endl;

    return 0; 
     
       
}