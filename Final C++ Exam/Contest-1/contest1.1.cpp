#include<bits/stdc++.h>
using namespace std;

bool kt(long long &n)
{
	for(int i = 2; i <= sqrt(n); ++i)
	{
		if(n % i == 0)
			return false;
	}
	return n > 1;
}

int main()
{
	long long n;
	cin >> n;
	if(kt(n)) cout << n << '\n';
	else
	{
		int i = 2;
		map<long long, int> mp;
		while(i <= n)
		{
			while(n % i == 0)
			{
				++mp[i];
				n /= i;
			}
			++i;
		}
		n = 2;
		i = 0;
		for(auto it : mp)
		{
			if(it.second > i)
			{
				i = it.second;
				n = it.first;
			}
		}
		cout << n << '\n';
	}
	return 0;
}
