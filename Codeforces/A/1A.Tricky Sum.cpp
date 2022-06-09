#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int sum = n * (n + 1) / 2;
        long long int un = floor(log2(2 * n));
        long long int sn = 1 * (pow(2, un) - 1);
        long long int res = sum - (2 * sn);
        cout << res << endl;
    }
}
