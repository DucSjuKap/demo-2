/*  Code by DucSiukapvippro */
//* dont cry bae =))

#include <iostream>
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
struct prince
{
    ll blood, power;
    bool dead;
};

int main()
{
    faster();
    map<string, pair<int, int>> mp;
    // set challenge information
    mp["mushroom"] = make_pair(-15, -2);
    mp["pea"] = make_pair(10, 2);
    mp["witch"] = make_pair(0, 5);
    mp["soldier"] = make_pair(5, 7);

    int n, num;
    string tmp;
    prince a;

    // set prince information
    cin >> tmp >> tmp >> num;
    a.power = num;
    cin >> tmp >> tmp >> num >> tmp;
    a.blood = num;
    a.dead = false;
    num = 0;

    // number of challenge
    cin >> n;
    while (n)
    {
        --n;
        cin >> tmp;
        if (tmp[0] == 's' || tmp[0] == 'w')
            cin >> num;
        if (num >= a.power)
            a.dead = true;
        a.blood += mp[tmp].first;
        a.power += mp[tmp].second;
        if (a.blood <= 0 || a.power <= 0)
            a.dead = true;
        if (a.dead)
        {
            cout << "POWER : 0\nBLOOD : 0\nDEAD\n";
            cout << "--------------------\n";
        }
        else
        {
            cout << "POWER : " << a.power << '\n';
            cout << "BLOOD : " << a.blood << '\n';
            cout << "ALIVE\n";
            cout << "--------------------\n";
        }
    }
    return 0;
}
/*  Code by DucSiukapvippro */