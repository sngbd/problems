#include <bits/stdc++.h>

using namespace std;

bool cond[4];
void check(string s, int n) {
    for (int i = 0; i < n; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            cond[0] = true;
        }
        else if (s[i] >= 'a' && s[i] <= 'z') {
            cond[1] = true;
        }
        else if (s[i] >= '0' && s[i] <= '9') {
            cond[2] = true;
        }
        else if (s[i] == '#' || s[i] == '@' || s[i] == '*' || s[i] == '&') {
            cond[3] = true;
        }
    }
}

int main() 
{
    int t;
    cin >> t;
    int c = 0;
    while (t--) {
        for (int i = 0; i < 5; i++) {
            cond[i] = false;
        }
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (s.length() >= 7) {
            check(s, n);
            if (cond[0] == false) {
                s += 'A';
                cond[0] = true;
            }
            if (cond[1] == false) {
                s += 'a';
                cond[1] = true;
            }
            if (cond[2] == false) {
                s += '1';
                cond[2] = true;
            }
            if (cond[3] == false) {
                s += '*';
                cond[3] = true;
            }
        }
        else {
            check(s, n);
            if (cond[0] == false) {
                s += 'A';
                cond[0] = true;
            }
            if (cond[1] == false) {
                s += 'a';
                cond[1] = true;
            }
            if (cond[2] == false) {
                s += '1';
                cond[2] = true;
            }
            if (cond[3] == false) {
                s += '*';
                cond[3] = true;
            }
            while (s.length() < 7) {
                s += '1';
            }
        }
        c++;
        cout << "Case #" << c << ": " << s << endl;
    }
}
