//Bishmillahir Rahmanir Rahim,In the name of Almighty Allah(swt)
//SSSP single source shortest path using DFS Tree
//hakcearth Bishu and his girlfriend
#include<bits/stdc++.h>
using namespace std;
void smile();

vector<int>graph[1234];
int visited[1234], dist[1234];


void dfs(int node, int d) {
   visited[node] = 1;
   dist[node] = d;
   for (int child : graph[node]) {
      if (visited[child] == 0) dfs(child, dist[node] + 1);
   }
}

int GraphDFS() {

   int node, edge;
   cin >> node;
   for (int i = 1; i < node; i++) {
      int u, v;
      cin >> u >> v;
      graph[u].push_back(v);
      graph[v].push_back(u);
   }

   dfs(1, 0);
   int q;
   cin >> q;
   int ans = -1, min_dist = 1e9;
   while (q--) {
      int city;
      cin >> city;
      if (dist[city] < min_dist) {
         min_dist = dist[city];
         ans = city;
      }
      else {
         if (dist[city] == min_dist && city < ans) ans = city;
      }
   }
   cout << ans << endl;

   return 0;
}


int main()
{
   smile();
   GraphDFS();


   return 0;
}

void smile() {
   ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
}