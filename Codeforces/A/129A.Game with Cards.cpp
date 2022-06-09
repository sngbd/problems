#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int tmp;
        int ma = 1, mb = 1;
        while (n--) {
            cin >> tmp;
            if (ma < tmp) {
                ma = tmp;
            }
        }
        int m;
        cin >> m;
        while (m--) {
            cin >> tmp;
            if (mb < tmp) {
                mb = tmp;
            }
        }
        if (ma > mb) {
            cout << "Alice\n";
            cout << "Alice\n";
        }
        else if (ma < mb) {
            cout << "Bob\n";
            cout << "Bob\n";
        }
        else {
            cout << "Alice\n";
            cout << "Bob\n";
        }
    }
}
