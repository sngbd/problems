#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	string c[t];
	for (int i = 0; i < t; i++)
		cin >> c[i];
	for (int i = 0; i < t; i++)
	{
		int sus = 0;
		int len = c[i].length();
		int o = len - 1;
		int l = 0;
		for (int k = len - 1; k >= 0; k--)
		{
			if (c[i][k] == '0')
				o = k;
		}
		for (int k = 0; k < len; k++)
		{
			if (c[i][k] == '1')
				l = k;
		}
		cout << o - l + 1 << endl;
	}
}
