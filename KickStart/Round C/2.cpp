#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int c = 1; c <= t; c++) {
        int n; 
        cin >> n;
        int x, y;
        cin >> x >> y;
        long int sum = (n * (n + 1)) / 2;
        int div = x + y;
        if (sum % div != 0) {
            cout << "Case #" << c << ": " << "IMPOSSIBLE" << endl;
            continue;
        }
        int alan = sum * x / div;
        vector<int> a;
        if (alan > n) {
            while (alan != 0) {
                if (alan < n) {
                    a.push_back(alan);
                    break;
                }
                alan -= n;
                a.push_back(n);
                n--;
            }
        }
        else {
            a.push_back(alan);
        }
        cout << "Case #" << c << ": " << "POSSIBLE" << endl;
        cout << a.size() << endl;
        for (int i = 0; i < a.size(); i++)
            cout << a[i] << " ";
        cout << endl;
        a.clear();
    }
}
