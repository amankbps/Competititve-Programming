#include <bits/stdc++.h>
using namespace std;
string FindMostFrequentWord(string str)
{
	map<string, int> m;
	string s = "";
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] != ' ')
			s += str[i];
		else
		{
			m[s]++;
			s = "";
		}
	}
	m[s]++;
	int maxi = INT_MIN;
	for (auto i : m)
	{
		if (maxi < i.second)
		{
			maxi = i.second;
			s = i.first;
		}
	}
	return s;
}
signed main()
{

	string str;
	cin >> str;
	cout << FindMostFrequentWord(str) << "\n";

	return 0;
}
