#include<bits/stdc++.h>
using namespace std;
struct sv{
	string msv, ten, ns, lop;
	float gpa;
};

void fix_name(string &s)
{
	s[0] = toupper(s[0]);
	for(int i = 1; i < s.size(); ++i)
	{
		if(s[i] == ' ')
		{
			++i;
			s[i] = toupper(s[i]);
		}
		else s[i] = tolower(s[i]);
	}
}

void fix_date(string &s)
{
	if(s[2] != '/') 
		s = '0' + s;
	if(s[5] != '/')
		s.insert(3, "0");
}

bool cmp(sv &a, sv &b)
{
	if(a.gpa == b.gpa) return a.msv < b.msv;
	return a.gpa > b.gpa;
}

int main()
{
	sv *ds;
	int n;
	cin >> n;
	ds = new sv[n];
	for(int i = 0; i < n; ++i)
	{
		scanf("\n");
		ds[i].msv = "SV0";
		if(i < 9) ds[i].msv += '0';
		ds[i].msv += to_string(i + 1);
		getline(cin, ds[i].ten);
		fix_name(ds[i].ten);
		cin >> ds[i].lop >> ds[i].ns >> ds[i].gpa;
		fix_date(ds[i].ns);
	}
	sort(ds, ds + n, cmp);
	for(int i = 0; i < n; ++i)
	{
		cout << ds[i].msv << ' ' << ds[i].ten << ' '
			 << ds[i].lop << ' ' << ds[i].ns << ' '
			 << setprecision(2) << fixed << ds[i].gpa << '\n';
	}
	return 0;
}
