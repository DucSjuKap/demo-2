/*  Code by DucSiukapvippro */
//* dont cry bae =))

// Problem 1 : Day so 23
// a1 = a2 = 1
// ai = (2 * a[i - 1]  +  3 * a[i - 2] ) % 1e9 + 7
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
	int n, mod = 1e9 + 7;
	vector<ll> v;
	cin >> n;
	v.resize(n + 1);
	v[1] = v[2] = 1;
	for(int i = 3; i <= n; ++i)
		// (a + b) % c = (a % c + b % c) % c
		v[i] = (2 * v[i - 1] + 3 * v[i - 2]) % mod;
	cout << v[n] << '\n';
    return 0;
}
/*  Code by DucSiukapvippro */
