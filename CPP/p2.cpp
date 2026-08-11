#include <iostream>
#include <algorithm>
#include <list>
using namespace std;
int main()
{
    list<int> numbers = {1, 9, 8, 2, 4, 7};

    numbers.sort();

    auto it=find_if(numbers.begin(), numbers.end(), [](int n)
        { return n % 2 == 0; });
    if (it != numbers.end())
    {
     cout << "first even number: " << *it << endl;
    }
    else
    {
        cout << "no even number." << endl;
    }

    return 0;
}