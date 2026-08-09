#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;
        int cnt = 1;
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1])
                cnt++;
        }

        bool ok = false;
        for (int i = 1; i < n - 1; i++) {
            if (s[i - 1] == s[i + 1]) {
                ok = true;
                break;
            }
        }

        if (ok)
            cout << cnt - 2 << endl;
        else
            cout << cnt - 1 << endl;
    }

    return 0;
}