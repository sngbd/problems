#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        long long int n;
        cin >> n;
        if (n % 2 != 0 || n < 4) {
            cout << "-1\n";
            continue;
        }
        long long int p = n / 2;
        long long int min, max;

        if (p % 3 == 2)
            min = ((p - 2) / 3) + 1;
        else if (p % 3 == 1)
            min = ((p - 4) / 3) + 2;
        else
            min = p / 3;

        if (p % 2 == 1)
            max = ((p - 3) / 2) + 1;
        else
            max = p / 2;

        cout << min << " " << max << endl;
    }
}
