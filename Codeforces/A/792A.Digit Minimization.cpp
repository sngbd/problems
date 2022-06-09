#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t; while (t--) 
    {
        string s;
        cin >> s;
        int mnm = min(s[0] - '0', s[1] - '0');
        for (int i = 0; i < s.length(); i++) 
        {
            int c = s[i] - '0';
            if (min(c, mnm) == c) 
            {
                mnm = c;
            }
        }
        if (s.length() == 2)
            cout << s[1] << endl;
        else
            cout << mnm << endl;
    }
}
