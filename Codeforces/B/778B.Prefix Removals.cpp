#include <bits/stdc++.h>

using namespace std;

bool isSubstr(string s)
{
    for (int i = 1; i <= s.length(); i++)
        if (s[0] == s[i])
        {
            return true;
        }
    return false;
}
int main()
{
    int n;
    string s[10000];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++)
    {
        while (true)
        {
            if (isSubstr(s[i]))
            {
                s[i] = s[i].substr(1, s[i].length() - 1);
                continue;
            }
            break;
        }
        cout << s[i] << endl;
    }
}
