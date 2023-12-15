/*  Code by DucSiukapvippro */
//* dont cry bae =))

// Problem 5 : Customer & Invoice
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>

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

struct customer
{
    string id, name;
    double discount;
};
struct invoice
{
    string id;
    double amount;
    customer cus;
};

string LastWord(string &s)
{
    int i = s.find(':') + 2;
    return &s[i];
}

bool cmp(invoice &a, invoice &b)
{
    if (a.amount == b.amount)
        return a.id < b.id;
    return a.amount > b.amount;
}
int main()
{
    // faster();
    int n;
    string tmp;
    cin >> n;
    scanf("\n");
    // list of invoice
    vector<invoice> v(n);
    for (int i = 0; i < n; ++i)
    {
        scanf("\n");
        getline(cin, tmp);
        getline(cin, v[i].cus.id);
        getline(cin, v[i].cus.name);

        getline(cin, tmp); // customer.discount
        v[i].cus.discount = stof(LastWord(tmp));

        getline(cin, v[i].id);

        // invoice.amount
        // "Amount : 1.1 &" => "tmp tmp double tmp"
        cin >> tmp >> tmp >> v[i].amount >> tmp;
        v[i].amount *= (1 - v[i].cus.discount / 100);
    }
    cin >> tmp;
    // sorting list invoice
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < n; ++i)
    {
        cout << v[i].cus.id << '\n';
        cout << v[i].cus.name << '\n';
        cout << "Amount : " << setprecision(2) << fixed << v[i].amount << " $\n";
        cout << tmp << '\n';
    }
    return 0;
}
/*  Code by DucSiukapvippro */