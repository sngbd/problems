#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, m;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;
        char a[n][m];
        bool found = false;
        int fj,fk;
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                cin >> a[j][k];
                if (a[j][k] == 'R' && !found)
                {
                    fj = j;
                    fk = k;
                    found = true;
                }
            }
        }
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                if (a[j][k] == 'R' && (j - fj < 0 || k - fk < 0))
                    goto x;
            }
        }
        cout << "YES\n";
        continue;
        x:
        cout << "NO\n";
    }
}
