#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        int snd = s[1] > s[0] ? s[1] - 97 : (s[1] - 96);
        int res = (s[0] - 97) * 25 + snd;
        cout << res << '\n';
    }
}
