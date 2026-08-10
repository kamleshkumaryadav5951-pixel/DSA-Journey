#include<iostream>
using namespace std;

int RemoveElement(int arr[]){
    int n = arr.size();
    if(arr.size() == 0){
        return 0;
    }
    int res = 1;
    for(int i=0; i< n; i++){
        if(arr[i] !=arr[i-1]){
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}

int main(){
    int arr[]={2,4,4,5,6,7,7};
    cout<<RemoveElement(arr)<<endl;
    return 0;

}