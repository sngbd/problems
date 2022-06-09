#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int sum = n - 1;
        int a;
        while (n--) {
            cin >> a;
            sum += a;
        }
        if (sum % 2 == 0) {
            cout << "errorgorn\n";
        }
        else {
            cout << "maomao90\n";
        }
    }
}
