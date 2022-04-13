//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
#include<bits/stdc++.h>
using namespace std;
void smile();
#define MAX 100000
std::vector<int> adjList[MAX + 5];
bool vis[MAX + 5];
ll subTree_sum[MAX + 5];
void dfs(int node) {
    vis[node] = 1;
    for (auto child : adjList[node]) {
        if (!vis[child]) dfs(child);
    }
}

//subtree sum using dfs
void dfs_subtree(int u) {
    vis[u] = 1;
    subTree_sum[u] = u;
    for (auto child : adjList[u]) {
        if (!vis[child]) {
            dfs_subtree(child);
            subTree_sum[u] += subTree_sum[child];
        }
    }
}

int main()
{
    smile();
    int node, edge;
    cin >> node >> edge;
    for (int i = 0; i < node; i++) {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    // dfs(0);

    subTree_sum(1);
    for (int i = 1; i <= n; i++) cout << i << sp << subTree_sum[i] << sp;


//check connected graph
int cnt=0;
	for (i = 1; i <= n; i++) {
		if (!vis[i]) {         //vis[i]=0 not connected, cn++
			dfs(i);
			cnt++;
		}
	}
cout<<cnt<<endl;



    return 0;
}

void smile() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
