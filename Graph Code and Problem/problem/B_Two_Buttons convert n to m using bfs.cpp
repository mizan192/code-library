// Bismillahir Rahmanir Raheem,
#include <bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"
#define ll long long int

#define MAX 100005
std::vector<int> gr[MAX + 5];
std::vector<int> dist;
int n, m;

// bfs code : which can find shortes single path

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    dist[src] = 0;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        int a = u - 1;
        int b = u * 2;

        // cerr << u << sp << a << sp << b << nl;

        if (a >= 1 && dist[a] == INT_MAX)
        {
            dist[a] = dist[u] + 1;
            q.push(a);
        }

        if (b <= m * 2 && dist[b] == INT_MAX)
        {
            dist[b] = dist[u] + 1;
            q.push(b);
        }

        if (dist[m] != INT_MAX)
            return;
    }
}

int main()
{
    int i, j;
    cin >> n >> m;
    int mx = max(n, m);
    dist.resize(MAX + 1, INT_MAX);

    // if (n >= m) {
    //     cout << n - m << nl;
    // }

    // else
    bfs(n);
    cout << dist[m] << nl;

    // for (i = 1; i <= m; i++) {
    //     cout << dist[i] << sp;
    // }

    return 0;
}
