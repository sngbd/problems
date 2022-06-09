#include <iostream>

using namespace std;

int main () 
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int p[n];
        int count = 0;
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        bool sel = false;
        for (int i = 0; i < n - 1; i++) {
            if (i > 0 && !sel)
                if (p[i] > p[i + 1] && p[i] < p[i - 1])
                {
                    sel = true;
                    continue;
                }
            if (p[i] > p[i + 1]) {
                sel = false;
                count++;
            }
        }
        cout << count << endl;
    }
}
