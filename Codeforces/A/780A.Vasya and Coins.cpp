#include <bits/stdc++.h>

using namespace std;

int main()
{
    long n;
    long burle[10000][2];
    cin >> n;
    for (long i = 0; i < n; i++)
    {
        cin >> burle[i][0] >> burle[i][1];
    }
    for (long i = 0; i < n; i++)
        for (long j = 0; j < 10000; j++)
            if (burle[i][0] == 0)
            {
                cout << 1 << endl; 
                break;
            }
            else if (burle[i][1] == 0)
            {
                cout << burle [i][0] + 1 << endl;
                break;
            }
            else
            {
                cout << burle[i][0] + (burle[i][1] * 2) + 1 << endl;
                    break;
            }
}
