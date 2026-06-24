// ==========================================
// Topic: 2D Arrays
// Pattern/Concept: 2D Vector Traversal
// ==========================================
#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<vector<int>> mat = {{1,2,3},{3,4,5},{6,7,8}};

    // rows = mat.size()
    // cols = mat[i].size()

    for(int i=0 ; i<mat.size() ; i++){
        for(int j=0  ; j<mat[i].size() ; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<< endl;
    }

    return 0;
}