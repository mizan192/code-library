//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
//time complexity : O(n3)
using namespace std;
#define sp " "
#define nl "\n"
#define pb push_back
#define ll long long int
#define lop(i,n) for(i=0;i<n;i++)
#define MAX 100
#define enf INT_MAX

int n, m;
int cost[MAX][MAX];

void floydWarshall() {
	for (int k = 0; k <= n; k++) {
		for (int i = 0; i <= n; i++) {
			for (int j = 0; j <= n; j++) {
				cost[i][j] = min(cost[i][j], cost[i][k] + cost[k][j]);
			}
		}
	}
}


int main()
{
	int i, j;
	cin >> n >> m;

	for (i = 0; i <= MAX; i++) {
		for (j = 0; j <= MAX; j++) {
			if(i==j) cost[i][j]=0;
			else cost[i][j] = enf;
		}
	}

	lop(i, m) {
		int u, v, c;
		cin >> u >> v >> c;
		cost[u][v] = c;
	}

	floydWarshall();

	cout << "Cost of 2 to 5 : " << cost[2][5] << nl;

	return 0;
}




