#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int a[4];
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < 4; j++)
            cin >> a[j];
        bool found = false;
        int res;
        for (int j = a[0]; j <= a[1]; j++)
        {
            if (j >= a[2] && j <= a[3])
            {
                res = j;
                found = true;
                break;
            }
        }

        if (found)
            cout << res << endl;
        else
            cout << a[2] + a[0] << endl;
    }
}
