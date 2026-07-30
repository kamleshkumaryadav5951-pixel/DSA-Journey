#include<iostream>
#include<vector>
using namespace std;

vector<int> div(int n){
    vector<int>value;
    for(int i=1; i<=n;i++){
        if(n%i==0){
            value.push_back(i);
        }
    }
    return value;
}

int main(){
    int n;
    cin>>n;
    vector<int> ans = div(n);
    for(int i=0; i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}