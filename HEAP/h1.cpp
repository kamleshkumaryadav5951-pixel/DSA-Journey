#include<iostream>
#include<algorithm>
#define MIN_HEAP 0
#define MAX_HEAP 1
using namespace std;

struct heap{
    int *array;
    int count;
    int capacity;
    int heap_type;
};
struct heap* createheap(int capacity, int heap_type){
    struct heap* h = new heap;
    h -> count =0;
    h -> capacity = capacity;
    h -> heap_type = heap_type;
    h -> array = new int[capacity];
    return h;
};
int parent(struct heap* h,int i){
    if(i <= 0 || i >= h ->count){
        return -1;
    }
    return (i-1)/2;
};
int leftchild(struct heap* h, int i){
    int left = 2*i+1;
    if(left >= h ->count){
        return -1;
    }
    return left;
};
int rightchild(struct heap* h, int i){
    int right = 2*i+2;
    if(right >= h -> count){
        return -1;
    }
    return right;
};
int getmaxheap(struct heap* h){
    if(h -> count == 0){
        return -1;
    }
    return h -> array[0];
};
void percolateDown(struct heap* h, int i){
    int l,r,max,temp;
    l = leftchild(h,i);
    r = rightchild(h,i);
    if(l != -1 && h -> array[l] > h -> array[i]){
        max =l;
    }
    else{
        max  =i;
    }
    if(r != -1 && h -> array[r] > h -> array[max]){
        max =r;
    }
    if(max != i){
    swap(h->array[i], h->array[max]);
    percolateDown(h, max);
    }
};
int main(){
    struct heap* h = createheap(10,1);
    h->array[0] = 50;
    h->array[1] = 70;
    h->array[2] = 40;
    h->array[3] = 10;
    h->array[4] = 20;
    h->array[5] = 15;
    h->array[6] = 35;

    h->count = 7;

    cout << "Capacity: " << h->capacity << endl;
    cout << "Count: " << h->count << endl;

    cout << "Max heap root: " << getmaxheap(h) << endl;
    cout << "Parent of index 4: "<<parent(h, 4) << endl;
    cout << "Left child of index 1: "<< leftchild(h, 1) << endl;
    cout << "Right child of index 1: "<< rightchild(h, 1) << endl;

    cout << "Original array: ";

    for(int i = 0; i < h->count; i++){
         cout << h->array[i] << " ";
    }

    cout << endl;
// Heapifying
    percolateDown(h, 0);
// Print after heapifying
    cout << "After heapifying: ";
    for(int i = 0; i < h->count; i++){
        cout << h->array[i] << " ";
    }
    cout << endl;

    return 0;
}