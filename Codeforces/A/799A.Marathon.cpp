#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  int a, b, c, d;
  while (t--) {
    int count = 0;
    int a[4];
    for (int i = 0; i < 4; i++)
      cin >> a[i];
    for (int i = 1; i < 4; i++) {
      if (a[0] < a[i])
	count++;
    }
    cout << count << endl;
  }
}
