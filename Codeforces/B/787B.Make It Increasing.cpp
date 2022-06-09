#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
 
int main() {
    int t;
    cin >> t;
    int n;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        ll a[n];
        for (int j = 0; j < n; j++)
            cin >> a[j];
        int op = 0;
        while (true)
        {
			bool imp = false;
            for (int j = 0; j < n - 1; j++)
                while (a[j] >= a[j+1])
                {
                    (a[j] == 0 ? imp = true : imp = false);
                    if (imp) break;
                    a[j] /= 2;
                    op++;
                }
            if (imp)
            {
                cout << -1 << endl;
                break;
            }
            bool cont = false;
            for (int j = 0; j < n - 1; j++)
                if (a[j] >= a[j+1])
                {
                	cont = true;
                	break;
                }
            if (cont)
            	continue;
            cout << op << endl;
            break;
        }
    }
}
