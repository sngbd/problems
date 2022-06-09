#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t;
    string s[t];
    for (ll i = 0; i < t; i++)
        cin >> s[i];
    for (ll i = 0; i < t; i++)
    {
        ll len = s[i].length();
        ll sum = 0;
        for (int j = 0; j < len; j++)
            sum += s[i][j] - 96;
        if (len % 2 == 0)
            cout << "Alice " << sum << endl;
        else if (len == 1)
            cout << "Bob " << sum << endl;
        else
        {
            ll res = max(sum-(s[i][0] - 96) * 2, sum-(s[i][len - 1] - 96)*2);
            cout << "Alice " << res << endl;
        }
    }
}

