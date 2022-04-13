//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
#include<bits/stdc++.h>
using namespace std;
void smile();
//Hackerearth : connected-components-in-a-graph
//perfect problem for dfs check

vector<int> ar[123456];
bool vis[123456];

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
	cin >> n >> m;
	for (i = 1; i <= m; i++) {
		cin >> a >> b;
		ar[a].push_back(b);
		ar[b].push_back(a);
	}
	//check connected graph
	for (i = 1; i <= n; i++) {
		if (!vis[i]) {         //vis[i]=0 not connected, cn++
			dfs(i);
			cnt++;
		}
	}

	cout << cnt << endl;

}

int main()
{
	smile();
	int t = 1;
	//cin >> t;
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