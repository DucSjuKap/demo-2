/*  Code by DucSiukapvippro */
//* dont cry bae =))

// Problem 4 : nen xau

#include <iostream>

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
    string s;
    char c;
    int cnt;
    cin >> s;
    c = s[0];
    cnt = 1;
    for (int i = 1; i < s.size(); ++i)
    {
        if (s[i] == c)
            ++cnt;
        else
        {
            cout << c << cnt;
            c = s[i];
            cnt = 1;
        }
    }
    cout << c << cnt << '\n';
    return 0;
}
/*  Code by DucSiukapvippro */