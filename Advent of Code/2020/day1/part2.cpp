#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream fin;
    fin.open("input.txt");
    vector<int> entries;
    string line;
    while (getline(fin, line)) {
        entries.push_back(stoi(line));
    }
    int a, b, c;
    int len = entries.size();
    for (int i = 0; i < len; i++) {
        a = entries[i];
        for (int j = 0; j < len; j++) {
            b = entries[j];
            for (int k = 0; k < len; k++) {
                c = entries[k];
                if (a + b + c == 2020) {
                    goto x;
                }
            }
        }
    }
    x:
    cout << a * b * c << endl;
}
