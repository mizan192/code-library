//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
#include<bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"
#define pb push_back
#define ll long long int
void smile();
#define MAX 20001
vector<int> gr[MAX];
int vis[MAX];
int color[MAX];
set<int>st;


int bfs(int s) {
    int vm = 0, lk = 0;
    queue<int>q;
    q.push(s);
    vis[s] = 1;
    vm++;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (auto child : gr[u]) {
            if (vis[child] == 0) {

                if (vis[u] == 1) {
                    vis[child] = 2;
                    lk++;
                }
                else {
                    vis[child] = 1;
                    vm++;
                }
                q.push(child);
            }
        }
    }
    return max(vm, lk);
}

int main()
{
    smile();
    int t;
    cin >> t;
    for (int test = 1; test <= t; test++) {
        int n, m = 0;
        cin >> n;

        memset(vis, 0, sizeof(vis));
        for (int i = 0; i <= MAX; i++) {
            gr[i].clear();
        }

        for (int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            gr[a].pb(b);
            gr[b].pb(a);
        }
        int mxCunt = 0;

        for (int i = 1; i <= MAX; i++) {
            if (!gr[i].empty() && vis[i] == 0) {
                int cnt = bfs(i);
                mxCunt += cnt;
            }
        }



        cout << "Case " << test << ": " << mxCunt << nl;

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
