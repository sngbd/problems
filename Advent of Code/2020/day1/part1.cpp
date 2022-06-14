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
  int a, b;
  for (int i = 0; i < entries.size(); i++) {
    for (int j = 0; j < entries.size(); j++) {
      if (2020 - entries[i] == entries[j]) {
	a = entries[i];
	b = entries[j];
	goto x;
      }
    }
  }
  x:
    cout << a * b << endl;
}
