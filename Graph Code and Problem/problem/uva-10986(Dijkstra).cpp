//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
//uva-10986 Sending email
#include<bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"
#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define lop(i,n) for(i=0;i<n;i++)
#define MAX 50005
#define pii pair<int,int>

int n, m, s, t;
vector<int>gr[MAX], cost[MAX];
int dist[MAX];

void dijkstra(int src) {
	priority_queue<pii, vector<pii>, greater<pii>>pq;

	for (int i = 0; i < n; i++) dist[i] = INT_MAX / 2;
	dist[src] = 0;

	pq.push({0, src});
	while (!pq.empty()) {

		pii pu = pq.top();
		pq.pop();

		int node = pu.second;
		for (int i = 0; i < gr[node].size(); i++) {
			int child = gr[node][i];
			int newDist = dist[node] + cost[node][i];
			if (dist[child] > newDist) {
				dist[child] = newDist;
				pq.push({dist[child], child});
			}
		}
	}
}


void solve()
{
	int i, j, u, v, c;
	cin >> n >> m >> s >> t;

	for (i = 0; i <= n; i++) {
		gr[i].clear();
		cost[i].clear();
	}

	lop(i, m) {
		cin >> u >> v >> c;
		gr[u].pb(v);
		gr[v].pb(u);
		cost[u].pb(c);
		cost[v].pb(c);
	}

	dijkstra(s);

	if (dist[t] == INT_MAX / 2) cout << "unreachable" << nl;
	else cout << dist[t] << nl;


	// for (int i = 0; i < n; i++) {
	// 	cout << i << " : " << dist[i] << nl;
	// }

}

int main()
{
	int test = 1;
	cin >> test;
	for (int i = 1; i <= test; i++) {
		cout << "Case #" << i << ": ";
		solve();
	}


	return 0;
}
