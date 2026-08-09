#include<iostream>
using namespace std;

bool isSorted(int arr[],int n){
    for(int i=0; i< n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] > arr[j]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int arr[]={456,34,34,534,3,2};
    int n = 6;
    bool ans = isSorted(arr,n);

    if(ans){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
    return 0;
}