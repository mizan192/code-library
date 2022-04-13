//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
#include<bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
void smile();
#define vsort(q) sort(q.begin(),q.end())
#define vsortr(q) sort(q.rbegin(),q.rend())
#define MAX 10005
int n, m;
int inOrder[MAX];
std::vector<int> vec;
std::vector<int> graph[MAX + 5];
bool vis[MAX + 5];
stack<int>stk;
std::vector<pair<int, int>> v;
priority_queue<int>pt;

void bfs() {
	for (int i = 1; i <= n; i++) {
		if (inOrder[i] == 0) pt.push(-i);
	}

	while (!pt.empty()) {
		int up = -pt.top();
		pt.pop();
		stk.push(up);
		vec.pb(up);
		for (auto child : graph[up]) {
			inOrder[child]--;
			if (inOrder[child] == 0) pt.push(-child);
		}
	}

}


int main()
{
	smile();

	cin >> n >> m;

	for (int i = 1; i <= m; i++) {
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		inOrder[b]++;
	}

	bfs();

//topological order
	for (auto x : vec) cout << x << sp;


	return 0;
}


void smile() {
	// ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}







