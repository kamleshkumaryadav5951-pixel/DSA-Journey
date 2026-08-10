#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
int main()
{
    array<int, 5> arr = {6, 3, 9, 2, 6};
    sort(arr.begin(), arr.end());
    cout << arr.at(3) << endl;
}