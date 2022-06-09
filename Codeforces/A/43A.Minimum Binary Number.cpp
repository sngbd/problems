#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int one = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            one++;
        }
    }
    string ns;
    if (one > 0)
        ns = '1';
    else {
        cout << "0\n";
        return 0;
    }
    for (int i = 0; i < n - one; i++) {
        ns += '0';
    }
    cout << ns << endl;
}
