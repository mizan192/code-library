//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MAX 100000

int  pr[MAX + 5];

int find_parent(int u) {
	if (u == pr[u]) return u;
	return pr[u] = find_parent(pr[u]);
}

void union_set(int u, int v) {
	int pu = find_parent(u);
	int pv = find_parent(v);
	pr[pu] = pv;
}

int query(int u, int v) {
	int pu = find_parent(u);
	int pv = find_parent(v);
	return pu == pv;  //if pu==pv then 1 else 0
}

int main()
{
	int i, j, n, q;
	cin >> n >> q;
	for (i = 0; i < n; i++)
		pr[i] = i;

	while (q--) {
		int type, u, v;
		cin >> type >> u >> v;

		if (type == 0) {
			union_set(u, v);
		}
		else if (type == 1) {
			cout << query(u, v) << "\n";
		}

	}

	return 0;
}

