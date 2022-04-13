//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
#include<bits/stdc++.h>
using namespace std;
#define sp " "
#define br cout<<"\n"
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define ll long long int
#define yes cout<<"YES\n"
#define vsort(q) sort(q.begin(),q.end())
#define lop(i,n) for(i=0;i<n;i++)
#define vpi vector<pair<int,int> >
#define ull unsigned long long int
#define vsortr(q) sort(q.rbegin(),q.rend())
#define debug cout<<"\n---------hi--------\n"
#define see(x) cout<<"\nvalue of "<<#x<<" = "<<x<<"\n"
#define iterate(it, x) for(auto it = x.begin(); it != x.end(); it++)
#define itertaRevers(it, x) for(auto it = x.rbegin(); it != x.rend(); it++)

void smile();

void solve()
{
	int i, j, k, n, len, ln, cnt = 0, cunt = 0, sum = 0;
	cin >> n;
	int a[n];
	std::map<int, std::vector<int> > m;
	std::map<int, std::vector<int> >:: iterator it;
	lop(i, n) cin >> a[i];
	lop(i, n) {
		cin >> k;
		m[a[i]].pb(k);
	}


//mx will return maximum size of vector
//sort vector in map
	int mx = 0;
	for (it = m.begin(); it != m.end(); it++) {
		int aa = it->ss.size();
		//mx = max(mx, aa);
		sort(it->second.begin(), it->second.end());
	}

	// for (auto x : m) {
	// 	cout << x.ff << " -> ";
	// 	for (auto y : x.ss) cout << y << " ";
	// 	br;
	// }

//print vector with in map
	for (it = m.begin(); it != m.end(); it++) {
		cout << it->first << " -> ";
		k = it->second.size();
		for (j = 0; j < k; j++) cout << it->second[j] << " ";
		br;
	}


// find prefix sum of vector with in map
	int mm = 0, ss = 0;
	for (it = m.begin(); it != m.end(); it++) {
		k = it->second.size();
		mm = 0;
		for (j = 0; j < k; j++) {
			// cout << it->second[j] << " ";
			ss = it->second[j];
			mm += ss;
			it->second[j] = mm;
		}
	}

	cout << "after prefix sum : \n";

	for (it = m.begin(); it != m.end(); it++) {
		cout << it->first << " -> ";
		k = it->second.size();
		for (j = 0; j < k; j++) cout << it->second[j] << " ";
		br;
	}


}

int main()
{
	smile();
	int t = 1;
	cin >> t;
	while (t--) {

		solve();



	}



	return 0;
}

void smile() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}