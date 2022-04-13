//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
#include<bits/stdc++.h>
using namespace std;
void smile();
//CodeChef : connected-components-in-a-graph
//perfect problem for dfs check

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
	cin >> e;
	for (i = 0; i < e; i++) {
		cin >> a >> b;
		ar[a].push_back(b);
		ar[b].push_back(a);
	}
	//check connected graph
	for (i = 0; i < n; i++) {
		if (!vis[i]) {         //vis[i]=0 not connected, cn++
			dfs(i);
			cnt++;
			//cout << vis[i] << " ";
		}
	}

	cout << cnt << endl;
	memset(vis, 0, sizeof(vis));
	for (i = 0; i < 123456; i++) {
		fill(ar[i].begin(), ar[i].end(), 0);
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