#include<iostream>
using namespace std;
/* int main(){
    int num[]={1,3,6,88,5,};
    int size =5;
    int smallest = INT_MAX;

    for(int i =0; i < size; i++){

    if(num[i]< smallest)
    smallest = num[i];

}
cout<<smallest;
} */
int main(){
int num[]={1,3,6,88,5,};
    int size =5;
    int largest = INT_MIN;

    for(int i=0; i< size; i++){
        largest = max(num[i],largest);
    }
    cout<<largest<<endl;
}

