//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
#include<bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define ll long long int
#define lop(i,n) for(i=0;i<n;i++)
void smile();
#define MAX 26
int n;
bool vis2D[MAX][MAX];
char ch[MAX][MAX];
// std::vector<string>ch;

int dx[] = { -1, +1, +0, +0, -1, +1, -1, +1};
int dy[] = { +0, +0, -1, +1, -1, +1, +1, -1};

bool isValid(int x, int y) {
	if (x < 0 || y < 0 || x >= n || y >= n) return false;
	if (vis2D[x][y] == true || ch[x][y] == '0') return false;
	else return true;
}


void dfs(int x, int y) {
	vis2D[x][y] = 1;
	for (int i = 0; i < 8; i++) {
		int a = x + dx[i];
		int b = y + dy[i];
		if (isValid(a, b)) dfs(a, b);
	}
}



int main()
{
	smile();
	int i, j, t = 1;

	while (cin >> n) {
		// cin >> n;
		// if (n >= 1 && n <= 26) {
		int cunt = 0;
		lop(i, n) {
			// string s;
			// // cin>>s;
			// scanf("%s", &s);
			// ch.pb(s);
			lop(j, n) {
				cin >> ch[i][j];
				// char c;
				// scanf("%c", &c);
				// ch[i][j] = c;
			}
		}

		memset(vis2D, 0, sizeof(vis2D));

		lop(i, n) {
			lop(j, n) {
				if (vis2D[i][j] == 0 && ch[i][j] == '1') {
					dfs(i, j);
					// cerr << i << sp << j << nl;
					cunt++;
				}
			}
		}
		// cout << cunt << "war eagles." << nl;


		// printf("Image number %d contains %d war eagles.\n", t, cunt);
		cout << "Image number " << t << " contains " << cunt << " war eagles." << nl;
		t++;

	}

	// 	else break;
	// }

	return 0;
}

void smile() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
