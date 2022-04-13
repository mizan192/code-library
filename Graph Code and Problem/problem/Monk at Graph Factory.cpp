//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
#include<bits/stdc++.h>
using namespace std;
void smile();
//Hackerearth : Monk at the Graph factory

vector<int> ar[123456];
int vis[123456];

void dfs(int node) {
	vis[node] = 1;

	for (int child : ar[node]) {
		if (!vis[child])
			dfs(child);
	}
}


void solve()
{
	int i, j, k, a, b, n, e, m, len, ln, cnt = 0, cunt = 0, sum = 0;
	cin >> n;
	for (i = 1; i <= n; i++) {
		cin >> a;
		sum += a;
	}
	//if degree = 2*(node-1) then tree
	n = (n - 1) * 2;
	if (sum == n) cout << "Yes\n";
	else cout << "No\n";
}

int main()
{
	smile();
	int t = 1;
	// cin >> t;
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