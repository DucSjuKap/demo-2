/*  Code by DucSiukapvippro */
//* dont cry bae =))

// Problem 1 : Thua so nguyen to thu K

#include <iostream>
#include <vector>
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

bool isPrime(int &n)
{
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
            return false;
    }
    return n > 2;
}

int main()
{
    faster();
    int n, k;
    cin >> n >> k;
    if (isPrime(n))
    {
        cout << (k == 1 ? n : -1) << '\n';
        return 0;
    }
    vector<int> v;
    int i = 2;
    while (i <= n)
    {
        while (n % i == 0)
        {
            v.push_back(i);
            n /= i;
            if (isPrime(n))
            {
                v.push_back(n);
                n /= n;
            }
        }
        ++i;
    }
    if (v.size() < k)
        cout << "-1\n";
    else
        cout << v[k - 1] << '\n';
    return 0;
}
/*  Code by DucSiukapvippro */