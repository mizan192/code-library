//Bishmillahir Rahmanir Rahim,In the name of Almighty Allah(swt)
//Graph Representation
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

   int node, edge, k;
   int n;
   cin >> n >> k;
   for (int i = 1; i < n; i++) {
      int a;
      cin >> a;
      graph[i].push_back(i + a);    //directed graph

      // i can visit at i+a cell

   }

   dfs(1);           // first placed at 1 position

   // we need to check kth position is it visited or not
   if(visited[k]==1) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;





   return 0;
}


int main()
{

   GraphDFS();


   return 0;
}
