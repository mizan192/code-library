//Bishmillahir Rahmanir Rahim,In the name of Almighty Allah(swt)
//DFS in Graph
#include<bits/stdc++.h>
using namespace std;
vector<int>graph[123456];
bool visited[123456];


void dfs(int source) {
   visited[source] = 1;

   for (int i = 0; i < graph[source].size(); i++) {

      int next = graph[source][i];

      if (visited[next] == 0)
         dfs(next);
   }
}

int GraphDFS() {

   int node, edge;
   cin >> node >> edge;
   for (int i = 0; i < edge; i++) {
      int u, v;
      cin >> u >> v;
      graph[u].push_back(v);
      graph[v].push_back(u);

   }

   dfs(0);

   // check all nodes is it visited
   for (int i = 0; i < node; i++) {
      if (visited[i] == 1) cout << i << "no visited." << endl;
      else cout << i << "no not visited." << endl;
   }

   return 0;
}


int main()
{

   GraphDFS();


   return 0;
}
