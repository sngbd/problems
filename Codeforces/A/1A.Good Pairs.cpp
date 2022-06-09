#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long int a;
        long int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        long int min = arr[0], max = arr[0];
        int imin, imax;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= max) {
                max = arr[i];
                imax = i + 1;
            }
            if (arr[i] <= min) {
                min = arr[i];
                imin = i + 1;
            }
        }
        cout << imin << " " << imax;
        cout << endl;
    }
}
