#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
 
int main() {
    ll t;
    cin >> t;
    ll d[t][5];
    for (ll i = 0; i < t; i++)
        for (int j = 0; j < 5; j++)
            cin >> d[i][j];
    for (ll i = 0; i < t; i++)
    {
        ll arem = d[i][0] - d[i][3];
        ll brem = d[i][1] - d[i][4];
        if (arem < 0)
            d[i][2] -= abs(arem);
        if (brem < 0)
            d[i][2] -= abs(brem);
        if (d[i][2] >= 0)
        {
            cout << "YES\n";
            continue;
        }
        cout << "NO\n";
    }
}
