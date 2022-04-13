//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
#include<bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"
#define mp make_pair
#define pb push_back
void smile();
#define MAX 1000

std::vector<int> graph[MAX + 5];
bool vis[MAX + 5];
stack<int>stk;

void dfs(int u) {
	vis[u] = 1;
	for (auto child : graph[u]) {
		if (!vis[child]) dfs(child);
	}
	stk.push(u);
}

int main()
{
	smile();
	
		int n, m;
		cin >> n >> m;

		for (int i = 1; i <= m; i++) {
			int a, b;
			cin >> a >> b;
			graph[a].push_back(b);
		}
	
	dfs(1);    //dfs call for source node

//topologicla order is :
	while (!stk.empty()) {
		cout << stk.top() << sp;
		stk.pop();
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







