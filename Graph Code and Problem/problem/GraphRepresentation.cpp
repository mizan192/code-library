//Bishmillahir Rahmanir Rahim,In the name of Almighty Allah(swt)
//Graph Representation
#include<bits/stdc++.h>
using namespace std;
vector<int>graph[123456];


int Graph() {

   int node, edge;
   cin >> node >> edge;
   for (int i = 0; i < edge; i++) {
      int u, v;
      cin >> u >> v;
      graph[u].push_back(v);    // u tomo node visited node
      graph[v].push_back(u);   // v tomo node visited u

   }

   cout << "The Graph is : " << endl;

   for (int i = 0; i <node; i++) {

      cout << i << " -> ";
      for (int j = 0; j < graph[i].size(); j++) {
         cout << graph[i][j] << " ";
      }

      cout << endl;

   }
return 0;
}


int main()
{

   Graph();


   return 0;
}
