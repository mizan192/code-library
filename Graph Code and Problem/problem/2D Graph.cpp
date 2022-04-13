//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
//2D Graph representation
#include<bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"
#define br cout<<"\n"
#define lop(i,n) for(i=0;i<n;i++)
void smile();
// 2D grid graph re-presentation
int n, m;
bool vis[201][201];

int dx[] = { -1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

bool isValid(int x, int y) {
	if (x < 1 || x > n || y < 1 || y > m) return false; // out of grid or matrix

	//if true then
	if (vis[x][y] == true) return false; // already visited
	else return true;
}

void dfs(int x, int y) {
	vis[x][y] = 1;

	for (int i = 0; i < 4; i++) {
		if (isValid(x + dx[i], y + dy[i]))
			dfs(x + dx[i], y + dy[i]);
	}

//for up = (x-1,y) = (x+dx[0],y+dy[0]) = (x-1,y)
//details code instead of above check

	// if (isValid(x - 1, y)) dfs(x - 1, y);  //up
	// if (isValid(x + 1, y)) dfs(x + 1, y); //down
	// if (isValid(x, y - 1)) dfs(x, y - 1); //left
	// if (isValid(x, y + 1)) dfs(x, y + 1); //right

//  if(isValid(x-1,y)==true) then dfs(x-1,y) will work

}



void solve()
{
	int i, j, k, len, ln, cnt = 0, cunt = 0, sum = 0;
	cin >> n >> m;    //row, column
	dfs(1, 1);


}

int main()
{
	smile();
	int t = 1;
	// cin >> t;
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



