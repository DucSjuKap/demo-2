/*  Code by DucSiukapvippro */
//* dont cry bae =))

// Problem 1 : Bang Nhan

#include <iostream>
#include <math.h>

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
    cin >> n >> x;
    int res = 0;
    for (int i = 1; i <= n; ++i)
        if (x % i == 0)
            res += (x / i <= n);
    cout << res << '\n';
    return 0;
}
/*  Code by DucSiukapvippro */