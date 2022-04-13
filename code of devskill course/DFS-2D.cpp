//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
//Connected Compoent count in 2D grid
//https://ideone.com/JkkjHp
#include<bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"
#define br cout<<"\n"
#define lop1(i,n) for(i=1;i<=n;i++)
void smile();
// 2D grid Connected Component
int n, m;
int ch[201][201];
bool vis[201][201];

int dx[] = {-1, +0, +1, +0};
int dy[] = {+0, +1, +0, -1};

//int dx[] = { -1, +1, +0, +0, -1, +1, -1, +1};
//int dy[] = { +0, +0, -1, +1, -1, +1, +1, -1};


bool isValid(int x, int y) {
	if (x < 1 || x > n || y < 1 || y > m) return false; // out of grid or matrix

	//if true then
	if (vis[x][y] == true || ch[x][y] == 0) return false; // already visited
	else return true;
}

void dfs(int x, int y) {
	vis[x][y] = 1;
	int a, b;
	for (int i = 0; i < 4; i++) {
		a = x + dx[i];
		b = y + dy[i];
		if (isValid(a, b))
			dfs(a, b);

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
	lop1(i, n) {
		lop1(j, m) cin >> ch[i][j];
	}
	lop1(i, n) {
		lop1(j, m) {
			if (vis[i][j] == 0 && ch[i][j] == 1) {
				dfs(i, j);
				cunt++;
			}
		}
	}

	cout << cunt << endl;

//input
// 6 6
// 0 0 1 0 1 1
// 0 1 1 0 0 1
// 0 1 0 0 0 0
// 1 0 1 1 0 0
// 0 0 0 1 0 0
// 0 1 1 0 1 1


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





//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
#include<bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"
#define ll long long int
void smile();
#define MAX 500000

std::vector<int>adj_list[MAX + 5];
bool vis2D[500][500];
char ch[500][500]

//2D DFS or Plane DFS : to solve maze problem

//direction array
int dx[] = { -1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

// int dx[] = { -1, 1, 0, 0, -1, 1, -1, 1};
// int dy[] = {0, 0, -1, 1, -1, 1, 1, -1};

//check index is out of bound or not
bool is_valid(int x, int y) {
	if (x < 1 || x > row || y < 1 || y > column) return false;
	if (vis2D[x][y] == 1 || ch[x][y] == 0) return false; //already visited
	else return true;
}

void dfs(int x, int y) {
	if (!is_valid(x, y)) return;
	vis2D[x][y] = 1;
	for (int i = 0, i < 4; i++) {
		dfs(x + dx[i], y + dy[i]);
	}
}


int main()
{
	smile();
	int n, m, u, v;
	cin >> n >> m;   //row , column

	dfs(1,1);




	return 0;
}


void smile() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


