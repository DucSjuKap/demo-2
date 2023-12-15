#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, d;
	long long *a;
	cin >> n >> d;
	a = new long long[n];
	for(int i = 0; i < n; ++i)
		cin >> a[i];
	long long dem = 0;
	for(int i = 1; i < n; ++i)
	{
		while(a[i] <= a[i - 1])
		{
			++dem;
			a[i] += d;
		}
	}
	cout << dem << '\n';
	delete[] a;
	return 0;
}
