// Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"
#define lop(i, n) for (i = 0; i < n; i++)
#define MAX 55

char ch[MAX][MAX];
bool vis[MAX][MAX];
int n, m;
bool found = false;
int dx[] = { -1, +0, +1, +0};
int dy[] = { +0, +1, +0, -1};
void dfs(int x, int y, int fromX, int fromY, char need)
{

    if (x < 0 || x >= n || y < 0 || y >= m)
        return;
    if (ch[x][y] != need) // diferent color
        return;
    if (vis[x][y])
    {
        found = true;
        return;
    }

    vis[x][y] = 1;
    int nextX, nextY;
    for (int i = 0; i < 4; i++)
    {
        nextX = x + dx[i];
        nextY = y + dy[i];
        if (nextX == fromX && nextY == fromY)
            continue;
        dfs(nextX, nextY, x, y, need);
    }
}

void solve()
{
    int i, j;
    cin >> n >> m;
    lop(i, n)
    {
        lop(j, m)
        {
            cin >> ch[i][j];
        }
    }

    lop(i, n)
    {
        lop(j, m)
        {
            if (!vis[i][j])
            {
                dfs(i, j, 0, 0, ch[i][j]);
            }
        }
    }
    if (found)
        cout << "Yes" << nl;
    else
        cout << "No" << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}