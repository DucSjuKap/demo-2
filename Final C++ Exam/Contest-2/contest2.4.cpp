/*  Code by DucSiukapvippro */
//* dont cry bae =))

// Problem 4: rut gon da thuc

#include <iostream>
#include <map>
#include <sstream>

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
//    faster();
	int n, fact, power;
	string result;
	map<int, int> mp;
	stringstream ss;
	cin >> n;
	scanf("\n");
	while(n)
	{
		--n;
		getline(cin, result);
		ss << result;
		while(ss >> result)
		{
			//result == fact + "x^" + power
			if(result == "+") continue;
			fact = power = 0;
			int i = 0;
			while(isdigit(result[i]))
			{
				fact = fact * 10 + result[i] - '0';
				++i;
			}
			// now result[i] == 'x'
			i += 2;
			while(isdigit(result[i]))
			{
				power = power * 10 + result[i] - '0';
				++i;
			}
			mp[power] += fact;
		}
		result = "";
		for(auto exp : mp)
		{
			result += to_string(exp.second); // fact
			result += "x^";
			result += to_string(exp.first); // power
			result += " + ";
		}
		// remove the last " + " in result
		result.pop_back();
		result.pop_back();
		result.pop_back();
		cout << result << '\n';
		// reset map and stringstream
		mp.clear();
		ss.clear();
	}
    return 0;
}
/*  Code by DucSiukapvippro */
