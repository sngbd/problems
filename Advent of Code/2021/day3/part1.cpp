#include <bits/stdc++.h>

using namespace std;

int main()
{
	string str[1000];
	int z, o;
	string g = "", e = "";
	for (int i = 0; i < 1000; i++)
		cin >> str[i];
	for (int i = 0; i < 12; i++)
	{
		z = 0;
		o = 0;
		for (int j = 0; j < 1000; j++)
		{
			if (str[j][i] == '0')
				z++;
			else if (str[j][i] == '1')
				o++;
		}
		g += max(z,o) == z ? "0" : "1";
		e += min(z,o) == z ? "0" : "1";
	}
	cout << stoi(g, nullptr, 2) * stoi(e, nullptr, 2) << endl;
}
