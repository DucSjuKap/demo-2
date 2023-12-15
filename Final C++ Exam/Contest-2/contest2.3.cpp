/*  Code by DucSiukapvippro */
//* dont cry bae =))

//Problem 3: Phan tu xuat hien o moi hang

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
	vector<int> v(101, 0);
	cin >> n;
	for(int i = 0; i < n; ++i)
		for(int j = 0; j < n; ++j)
		{
			cin >> x;
			if(v[x] == i) ++v[x];
		}
	vector<int> res;
	for(int i = 0; i < 101; ++i)
		if(v[i] == n) res.push_back(i);
	if(res.empty()) cout << "NOT FOUND";
	for(int i : res) 
		cout << i << ' ';
	cout << '\n';
    return 0;
}
/*  Code by DucSiukapvippro */
