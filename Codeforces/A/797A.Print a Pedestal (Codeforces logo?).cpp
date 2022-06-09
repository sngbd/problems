#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    int n;
    while (t--) {
        cin >> n;
        int h[3];
        int eq = n / 3;
        for (int i = 0; i < 3; i++) {
            h[i] = eq;
        }
        int sel = n - (eq * 3);
        if (sel == 2) {
            h[0]++;
            h[1]++;
        }
        else if (sel == 1) {
            h[1]++;
        }
        while (true) {
            if (h[1] <= h[0]) {
                h[0]--;
                h[1]++;
            }
            if (h[0] <= h[2]) {
                h[2]--;
                h[0]++;
            }
            if (h[0] > h[2] && h[1] > h[0])
                break;
        }
        cout << h[0] << " " << h[1] << " " << h[2] << endl;
    }
}
