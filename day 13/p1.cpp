#include<iostream>
using namespace std;
int Binarysearch(vector<int> arr, int tar){
    int st=0;
    int end=arr.size()-1;
    while(st <= end){
        int mid = st + (end-st)/2;
        if(tar > arr[mid]){
            st = mid + 1;

        }
        else if (tar < arr[mid]){
            end = mid - 1;
        }
        else{
            return mid;
        }
         
    }
    return -1;
}

int main(){
    vector<int> arr1={-1,0,3,4,5,9,12,23};
    int tar1 = 100;
    cout<<Binarysearch(arr1,tar1)<<endl;
}