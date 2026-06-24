// ==========================================
// Topic: Number Systems
// Pattern/Concept: Decimal to Binary Conversion
// ==========================================
#include<iostream>
using namespace std;
int main(){
    int arr[6]={2,4,4,9,6,7};
    int target=9;
    int index=-1;
    
    for(int i = 0;i < 6;i++){
        if(arr[i]==target){
            index=i;
            break;
        }
    }
    if(index !=-1)
        cout<<"index value is :"<<index<<endl;
    else
        cout<<"not found"<<endl;
        return 0;
}