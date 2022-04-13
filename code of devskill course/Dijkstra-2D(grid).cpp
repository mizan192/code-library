//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
//spoj : SHOP  -> Dijkstra on grid
#include<bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"
#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define lop(i,n) for(i=0;i<n;i++)

int dx[] = { -1, +0, +1, +0};
int dy[] = { +0, +1, +0, -1};

int row, col, si, sj, di, dj;
char cost[30][30];
int dist[30][30];

void dijkstra(int x, int y) {

	// priority_queue<pair<int, pair<int, int>>> pq;
	priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;

	dist[x][y] = 0;
	pq.push({0, {x, y}});

	while (!pq.empty()) {

		int p = pq.top().ss.ff;
		int q = pq.top().ss.ss;
		pq.pop();

		for (int i = 0; i < 4; i++) {
			int pp = p + dx[i];
			int qq = q + dy[i];
			if (pp >= 0 && pp < row && qq >= 0 && qq < col && cost[pp][qq] != 'X') {
				int newDist = dist[p][q] + cost[pp][qq] - '0';
				if (dist[pp][qq] > newDist) {
					dist[pp][qq] =  newDist;
					pq.push({newDist, {pp, qq}});
				}
			}
		}

	}

}

int main()
{
	int i, j;
	while (1) {
		cin >> col >> row;
		if (col + row == 0) break;
		char c;
		lop(i, row) {
			lop(j, col) {
				dist[i][j] = 1e5;
				cin >> cost[i][j];
				if (cost[i][j] == 'S') {
					si = i, sj = j;
				}
				if (cost[i][j] == 'D') {
					di = i, dj = j;
				}
			}
		}

		dijkstra(si, sj);

		cout << dist[di][dj] - 20 << nl;

		// for (int i = 0; i < row; i++) {
		// 	for (int j = 0; j < col; j++) cout << dist[i][j] << sp;
		// 	cout << nl;
		// }

	}


	return 0;
}


//---- same dijkstra with priority queue minus value for min heap

// void dijkstra(int x, int y)
// {
// 	// priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
// 	priority_queue<pair<int, pair<int, int>>> pq;


// 	dist[x][y] = 0;

// 	pq.push({0, {x, y}});

// 	while (!pq.empty())
// 	{

// 		// pair<int, pair<int, int>> pu = pq.top();
// 		int d = -pq.top().ff;
// 		int p = pq.top().ss.ff;
// 		int q = pq.top().ss.ss;

// 		pq.pop();

// 		if (ch[p][q] == 'D')
// 			return;

// 		for (int i = 0; i < 4; i++)
// 		{
// 			int pp = p + dx[i];
// 			int qq = q + dy[i];
// 			if (pp >= 0 && pp < row && qq >= 0 && qq < col && cost[pp][qq] != 'X') {
// 				int newDist = dist[p][q] + cost[pp][qq] - '0';
// 				if (dist[pp][qq] > newDist) {
// 					dist[pp][qq] =  newDist;
// 					pq.push({ -newDist, {pp, qq}});
// 				}
// 			}
// 		}
// 	}
// }