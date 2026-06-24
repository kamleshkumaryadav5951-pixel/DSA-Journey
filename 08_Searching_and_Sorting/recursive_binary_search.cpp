// ==========================================
// Topic: Binary Search
// Pattern/Concept: Recursive Binary Search
// ==========================================
#include<iostream>
#include<vector>
using namespace std;
int RecBinarySea(vector<int>arr,int tar,int st,int end){
    
    int mid = st + (end-st)/2;
    if(st<=end){

    if(tar>arr[mid]){
        return RecBinarySea(arr,tar,mid+1,end);
    }
    else if(tar < arr[mid]){
        return RecBinarySea(arr,tar,st,mid-1);
    }
    else{
        return mid;
    }
    }
    return -1;

}

int main(){ 
    vector<int>arr1={-1,0,3,5,9,12};
    int target1=0;
    cout<<RecBinarySea(arr1,target1,0,arr1.size()-1)<<endl;
}