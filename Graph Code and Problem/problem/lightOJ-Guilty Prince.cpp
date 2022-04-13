//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
#include<bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"
#define br cout<<"\n"
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define ll long long int
#define lop(i,n) for(i=0;i<n;i++)
#define vsort(q) sort(q.begin(),q.end())
#define vsortr(q) sort(q.rbegin(),q.rend())
void smile();

bool vis2D[30][30];
int row, column, cunt = 0;
char ch[30][30];

int dx[] = { -1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
// int dx[] = { -1, 1, 0, 0, -1, 1, -1, 1};
// int dy[] = {0, 0, -1, 1, -1, 1, 1, -1};

bool is_valid(int x, int y) {
    if (x < 0 || x >= row || y < 0 || y >= column) return false;
    if (vis2D[x][y] == 1 || ch[x][y] == '#') return false;
    else return true;
}

void dfs(int x, int y) {
    vis2D[x][y] = 1;
    for (int i = 0; i < 4; i++) {
        int a = x + dx[i];
        int b = y + dy[i];
        if (is_valid(a, b)) {
            dfs(a, b);
            cunt++;
        }
    }
}

void solve()
{
    int i, j, k, n, p, q;
    cin >> column >> row;
    lop(i, row) {
        lop(j, column) {
            cin >> ch[i][j];
            if (ch[i][j] == '@') {
                p = i, q = j;
            }
        }
    }

    dfs(p, q);
    cout << cunt + 1 << nl;

    cunt = 0;
    lop(i, row) {
        lop(j, column) vis2D[i][j] = 0;
    }


}

int main()
{
    smile();
    int t = 1, test = 1;
    cin >> t;
    while (t--) {
        cout << "Case " << test << ": ";
        test++;
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
