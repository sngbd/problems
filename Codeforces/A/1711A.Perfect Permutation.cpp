#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  int n;
  while (t--) {
    cin >> n;
    cout << n << " ";
    for (int i = 1; i < n; i++)
        cout << i << " ";
    cout << '\n';
  }
}
