//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
#include<bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"
#define ll long long int
void smile();
#define MAX 500000
std::vector<int>gr[MAX + 5];
std::vector<int>dist;


//bfs code for multiple source to find shortes path

void bfs(int src1, int src2) {
	queue<int>q;
	q.push(src1);
	q.push(src2)
	dist[src1] = 0;
	dist[src2] = 0;
	while (!q.empty()) {
		int u = q.front();
		q.pop();
		for (auto v : gr[u]) {
			if (dist[v] == INT_MAX) { //not visited
				dist[v] = dist[u] + 1;
				q.push(v);
			}
		}
	}
}


int main()
{
	smile();
	int n, m, u, v;
	cin >> n >> m;
	dist.resize(n + 1, INT_MAX);

	for (int i = 0; i < m; i++) {
		cin >> u >> v;
		gr[u].push_back(v);
		gr[v].push_back(u);
	}
//if multiple source thake tahole :
	int s1 = 1, s2 = 3;
	bfs(s1, s2);
	for (int i = 1; i <= n; i++) {
		cout << i << " : " << dist[i] << nl;
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

/*
7 9
1 2
2 3
3 4
3 7
1 4
2 5
2 6
6 5
5 4
*/





