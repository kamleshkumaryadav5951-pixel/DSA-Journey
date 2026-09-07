//rotate an employe roster

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<string> emp = {"kamlesh","raja","deepak","sambhav","sambur"};
    int position;
    position = position % emp.size();
    cin >> position;
    rotate(emp.begin(),emp.begin()+position,emp.end());
    for(const string name:emp){
        cout<<name <<" ";
        
    }
    cout<<endl;
    return 0;
    
}