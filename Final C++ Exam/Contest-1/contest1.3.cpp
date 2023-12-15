#include<bits/stdc++.h>
using namespace std;

int r[] = {-1, 0, 1, 0};
int c[] = {0, 1, 0, -1};

void loang(vector<vector<int>> &a, vector<vector<int>> &b, int &i, int &j, int &m, int &n, int &res)
{
    int dem = 0;
    a[i][j] = 0;
    int i1, j1;
    for(int x = 0; x < 4; ++x)
    {
    	i1 = i + r[x];
		j1 = j + c[x];
        if(i1 < 0 || j1 < 0 || i1 >= n || j1 >= m) continue;
        dem += b[i1][j1];
        if(a[i1][j1]) 
            loang(a, b, i1, j1, m, n, res);
    }
    res += 4 - dem;
}
int main()
{
    int n, m, res;
    vector<vector<int>> a;
    cin >> n >> m;
    a.resize(n);
    for(int i = 0; i < n; ++i)
    {
        a[i].resize(m);
        for(int j = 0; j < m; ++j)
            cin >> a[i][j];
    }
    vector<vector<int>> b = a;
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            if(a[i][j])
            {
                res = 0;
                loang(a, b, i, j, m, n, res);
                cout << res << ' ';
            }
        }
    }
    cout << '\n';
}
