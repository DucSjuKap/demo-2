/*  Code by DucSiukapvippro */
//* dont cry bae =))

// Problem 2 : Longest zero sum sub array

#include <iostream>
#include <vector>
#include <map>

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
    int n;
    vector<ll> v;
    cin >> n;
    v.resize(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    ll sum = 0;      // sum {a[0], a[1], .... , a[i]}
    map<ll, int> mp; // marked map
    mp[0] = -1;
    int start, end, len, tmp;
    len = -1;
    for (int i = 0; i < n; ++i)
    {
        sum += v[i];
        if (mp[sum])
        {
            tmp = i - mp[sum];
            if (tmp > len || (tmp == len && mp[sum] < start))
            {
                start = mp[sum];
                end = i;
                len = end - start; // answer : {a[start + 1], a[start + 2, .... , a[end]]}
            }
        }
        else
            mp[sum] = i;
    }
    if (len == -1)
        cout << "NOT FOUND";
    else
    {
        while (start < end)
        {
            ++start;
            cout << v[start] << ' ';
        }
    }
    cout << '\n';

    return 0;
}
/*  Code by DucSiukapvippro */