///Bishmillahir Rahmanir Rahim,In the name of Almighty Allah(swt)
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lop(i,n) for(i=0;i<n;i++)
#define lop1(i,n) for(i=1;i<=n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

int main()
{	
	int n, k;
	cin >> n >> k;
	
	std::map<int, pair<int, int> > m;
	m.insert(mp(1, mp(4, 5)));
	m.insert(mp(2, mp(14, 15)));
	m.insert(mp(3, mp(24, 35)));

	for (auto x : m) {
		cout << x.ff << " -> " << x.ss.ff << sp << x.ss.ss << nl;
	}


	
	std::map<pair<int, int>, int> m;
	std::map<pair<int, int>, int>:: iterator it;
	for (int i = 1; i <= n; i++) {
		int a, b;
		cin >> a >> b;

		m[ mp(a, b)]++;

	}
	for (it = m.begin(); it != m.end(); it++) {
		cout << it->first.first << " " << it->first.second << " - " << it->second << endl;
	}


	cout << m.size() << endl;





	return 0;
}

