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
//shortest path : Dijkstra

int n, m;
std::vector<int> gr[105], cost[105];
int dist[105];

void shortest_path(int src)
{

    //----priority queue max heap niye kaj kore tai min heap anar jnno vec pari and greater comp function use kora hoice
    // priority_queue<pii, vector<pii>, greater<pii> >PQ;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    //memset(dist, INT_MAX, sizeof(dist));
    for (int i = 1; i <= n; i++)
        dist[i] = INT_MAX;

    dist[src] = 0;
    pq.push({0, src}); //pq is pair first dist then source

    while (!pq.empty())
    {
        auto pu = pq.top();
        int u = pu.second;
        pq.pop();
        for (int i = 0; i < gr[u].size(); i++)
        {
            int v = gr[u][i];
	    int cst =cost[u][i];
            if (dist[v] > dist[u] + cst)
            {
                dist[v] = dist[u] + cst;
                pq.push({dist[v], v});
            }
        }
    }
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

    shortest_path(1);

    for (i = 1; i <= n; i++)
        cout << i << " : " << dist[i] << "\n";

    return 0;
}
