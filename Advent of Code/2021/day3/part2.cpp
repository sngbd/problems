#include <bits/stdc++.h>

using namespace std;

char most(vector<string> x, int j)
{
	int z = 0, o = 0;
	for (int i = 0; i < x.size(); i++)
	{
		if (x[i][j] == '0')
			z++;
		else if (x[i][j] == '1')
			o++;
	}
	return (max(o,z) == o ? '1' : '0');
}

int main()
{
	string str[1000];
	int z = 0, o = 0;;
	vector<string> ox, co;
	for (int i = 0; i < 1000; i++)
		cin >> str[i];
	for (int i = 0; i < 1000; i++) 
	{
		if (str[i][0] == '0')
			z++;
		else if (str[i][0] == '1')
			o++;
	}
	for (int i = 0; i < 1000; i++) 
	{
		if ((max(o,z) == o ? '1' : '0') == str[i][0])
		{
			ox.push_back(str[i]);
		}
	}
	for (int i = 0; i < 1000; i++) 
	{
		if ((min(z,o) == z ? '0' : '1') == str[i][0])
		{
			co.push_back(str[i]);
		}
	}
	vector<string> tmp, tmp2;
	for (int i = 1; i < 12; i++)
	{
		tmp = ox;
		tmp2 = co;
		ox.clear();
		co.clear();
		for (int j = 0; j < tmp.size(); j++)
		{
			if (most(tmp, i) == tmp[j][i])
				ox.push_back(tmp[j]);
		}
		for (int j = 0; j < tmp2.size(); j++)
		{
			if (most(tmp2, i) != tmp2[j][i])
				co.push_back(tmp2[j]);
		}
	}
	cout << stoi(ox[0], nullptr, 2) * stoi(co[0], nullptr, 2) << endl;
}
