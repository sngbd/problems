#include <iostream>

using namespace std;

int main () 
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int sum;
        int mxn;
        for (int i = 0; i < n; i++) {
            sum = 0;
            mxn = a[i] * (n - 1);
            for (int j = 0; j < n; j++) {
                if (j == i) {
                    continue;
                }
                sum += a[j];
            }
            if (sum == mxn) {
                cout << "YES\n";
                goto out;
            }
        }
        cout << "NO\n";
        continue;
        out:
        continue;
    }
}
