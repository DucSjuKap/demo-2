/*  Code by DucSiukapvippro */
//* dont cry bae =))

// Problem 2 : sum(ai, aj) mod 28 == 0
#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;
typedef long double ld;
#define F(i, a, b) for (i = a; i < b; ++i)
#define Fe(i, a, b) for (i = a; i <= b; ++i)
#define FD(i, a, b) for (i = a; i > b; --i)
#define FDe(i, a, b) for (i = a; i >= b; --i)
#define fi first;
#define se second;
#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);

int main()
{
    faster();
	int n, x;
	vector<ll> v(28, 0); // v[x % 28]
	cin >> n;
	while(n)
	{
		--n;
		cin >> x;
		++v[x % 28];
	}
	long long res;
	res = v[0] * (v[0] - 1) / 2;
	res += v[14] * (v[14] - 1) / 2;
	for(int i = 1; i <= 13; ++i)
		res += v[i] * v[28 - i];
	cout << res << '\n';
    return 0;
}
/*  Code by DucSiukapvippro */
