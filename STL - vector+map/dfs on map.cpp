//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
//https://codeforces.com/contest/977/problem/D
#include<bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"
#define mp make_pair
#define pb push_back
#define ll long long int
#define lop(i,n) for(i=0;i<n;i++)
#define vsort(q) sort(q.begin(),q.end())
void smile();

//dfs on map for big number that can't store in adjency matrix

std::map<ll, int> m;
std::map<ll, vector<ll>> gr;
std::map<ll, bool> vis;
void inputVector(vector<ll>&v, int n) {
	for (int i = 0; i < n; i++) {
		ll a;
		cin >> a;
		m[a]++;
		v.pb(a);
	}
}
ll ct = 0;
std::vector<ll> ans;

ll dfs(ll n) {
	if (vis[n] == 1) return 0;
	vis[n] = 1;
	ans.pb(n);
	for (auto x : gr[n]) {
		if (m[x] == 1 && vis[x] == 0) {
			dfs(x);
		}
	}
	return ans.size();
}


void solve()
{
	int i, j, k, n, len, ln, cnt = 0;
	cin >> n;
	std::vector<ll> v;
	inputVector(v, n);
	vsort(v);

	for (i = 0; i < n; i++) {
		ll a = v[i];
		if (a % 3 == 0 && m[a / 3] >= 1) {
			gr[a].pb(a / 3);
		}
		if (m[a * 2] >= 1) {
			gr[a].pb(a * 2);
		}
	}

	for (i = 0; i < n; i++) {
		vis.clear();
		ans.clear();
		ll a = v[i];
		cnt = dfs(a);
		if (cnt == n) {
			for (auto x : ans) cout << x << sp;
			return;
		}
	}




}

int main()
{
	smile();
	int t = 1;
	// cin >> t;
	// cin.ignore();
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
	// freopen("error.txt", "w", stderr);
#endif
}