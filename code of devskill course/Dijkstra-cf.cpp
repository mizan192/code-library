//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
#include <bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define ll long long int
#define pii pair<int, int>
#define MAX 100010
//shortest path : Dijkstra

int n, m;
std::vector<int> gr[MAX + 5], cost[MAX + 5];

void shortest_path(int src, int dst)
{
    vector<ll> dist(dst + 1, LLONG_MAX);
    vector<int> parent(dst + 1, -1);
    dist[src] = 0;
    //----priority queue max heap niye kaj kore tai min heap anar jnno vec pari and greater comp function use kora hoice
    // priority_queue<pii, vector<pii>, greater<pii> >PQ;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    pq.push({0, src}); //pq is pair first dist then source

    while (!pq.empty())
    {
        auto pu = pq.top();
        int u = pu.second;
        pq.pop();
        for (int i = 0; i < gr[u].size(); i++)
        {
            int v = gr[u][i];
            int cst = cost[u][i];
            if (dist[v] > dist[u] + cst)
            {
                parent[v] = u;
                dist[v] = dist[u] + cst;
                pq.push({dist[v], v});
            }
        }
    }
    if (dist[dst] == LLONG_MAX) //no possible
    {
        cout << -1 << endl;
        return;
    }
    vector<int> path;
    int node = dst;
    while (node != -1)
    {
        path.push_back(node);
        node = parent[node];
    }
    reverse(path.begin(), path.end());

    for (int i = 0; i < path.size(); i++)
    {
        cout << path[i] << " ";
    }
    cout << endl;
}

int main()
{
    int i, j, u, v, cst;
    cin >> n >> m;
    for (i = 0; i < m; i++)
    {
        cin >> u >> v >> cst;
        gr[v].push_back(u);
        gr[u].push_back(v);
        cost[v].push_back(cst);
        cost[u].push_back(cst);
    }

    shortest_path(1, n);

    return 0;
}
