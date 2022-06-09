#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int n,m;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;
        string a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int res = 0;
        for (int i = 0; i < m; i++)
        {
            res += abs(a[0][i] - a[1][i]);
        }
        int mnm = res;
        for (int i = 0; i < n; i++)
        {
           for (int j = i + 1; j < n; j++) 
           {
               res = 0;
               for (int k = 0; k < m; k++)
               {
                   res += abs(a[i][k] - a[j][k]);
               }
               mnm = min(res, mnm);
           }
        }
        cout << mnm << endl;
    }
}
