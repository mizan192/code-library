//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
#include<bits/stdc++.h>
using namespace std;
void smile();
#define MAX 100000
std::vector<int> adjList[MAX + 5];

void adj_martix_representation() {
	vector<vector<int>> adj_matrix;
	int node, edge;
	cin >> node >> edge;
	adj_matrix.resize(node, vector<int>(node, 0)); //declar vector array with 0 initial value
	for (int i = 0; i < node; i++) adj_matrix[i][i] = 1; //digonal value
	for (int i = 0; i < edge; i++) {
		int u, v;
		cin >> u >> v;
		adj_matrix[u][v] = 1;
		adj_matrix[v][u] = 1;
	}
	// for (int i = 0; i < node; i++) {
	// 	for (int j = 0; j < node; j++) cout << adj_matrix[i][j] << " ";
	// 	cout << endl;
	// }
	for (auto row : adj_matrix) {
		for (auto x : row) cout << x << " ";
		cout << endl;
	}
}

void adj_list_representation() {
	int node, edge;
	cin >> node >> edge;
	for (int i = 0; i < edge; i++) {
		int u, v;
		cin >> u >> v;
		adjList[u].push_back(v);
		adjList[v].push_back(u);
	}
	for (int i = 0; i < node; i++) {
		cout << i << " -> ";
		for (auto x : adjList[i]) cout << x << " ";
		cout << endl;
	}
}

int main()
{
	smile();

	//graph representation in adjency matrix
	adj_martix_representation();
	//graph representation in adjency list
	adj_list_representation();





	return 0;
}

void smile() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
