#include<iostream>
using namespace std;

int maxelement(int arr[], int n){
    int max = arr[0];
    for(int i=0; i< n;i++){
        if(max< arr[i]){
            max=arr[i];
        }
    }
    return max;
}

int main(){
    int arr[]={4,6,1,9,2,61};
    int n= 6;
    cout<<maxelement(arr,n)<<endl;
    return 0;

}