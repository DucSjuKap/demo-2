#include<bits/stdc++.h>
using namespace std;

int main()
{
	map<string, int> mp;
	string s, tmp;
	int result, t;
	for(int i = 0; i < 10; ++i)
	{
		cin >> s;
		cin >> mp[s];
		cout << mp[s] << ' ';
	}
	cin >> t;
	while(t)
	{
		--t;
		cin >> tmp;
		s = "";
		result = 0;
		for(int i = 0; i < tmp.size(); ++i)
		{
			if(isdigit(s[i]))
			{
				result += mp[s] * (s[i] - '0');
				s = "";
			}
			else s += tmp[i];
		}
		cout << result << '\n';
	}
	return 0;
}
