#include <bits/stdc++.h>

using namespace std;

int main()
{
	int hor = 0, dep = 0, aim = 0;
	string str[1000];
	int mv[1000];
	for (int i = 0; i < 1000; i++)
	{
		cin >> str[i];
		cin >> mv[i];
	}
	for (int i = 0; i < 1000; i++)
	{
		if (!(str[i].compare("forward")))
		{
			hor += mv[i];
			dep += aim * mv[i];
		}
		else if (!str[i].compare("down"))
			aim += mv[i];
		else if (!str[i].compare("up"))
			aim -= mv[i];
	}
	cout << hor * dep << '\n';
}
