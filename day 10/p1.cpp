#include<iostream>
using namespace std;
int main(){
   /* vector<int> v={20,39,34};
vector<int>::iterator it= v.end();
it--;
cout<<*(it)<<endl;*/
//vector<int> v={30,40,34,35};
//  for(vector<int>::iterator it=v.begin(); it !=v.end();it++){
//     cout<<*(it)<<" " ;
//  }
//  for(auto it=v.begin(); it !=v.end();it++){
//     cout<<*(it)<<" ";
//  }
//  vector<int> v={30,40,34,35};
//  for(auto it:v){
//     cout<<(it)<<" "<<endl;
//  }
 vector<int> v={30,40,34,35};

 for(auto it = v.begin(); it !=v.end();it++){
 v.erase(v.begin()+1);
 
}
}