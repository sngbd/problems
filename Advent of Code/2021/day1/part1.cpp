#include <bits/stdc++.h>

using namespace std;

int main()
{
	int in[2000];
	int cnt = 0;
	for (int i = 0; i < 2000; i++)
	{
		cin >> in[i];
	}
	for (int i = 1; i < 2000; i++)
	{
		if (in[i] > in[i-1])
		{
			cnt++;
		}
	}
	cout << cnt << '\n';
}
