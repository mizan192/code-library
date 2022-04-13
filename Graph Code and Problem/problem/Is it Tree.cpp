//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
#include<bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"
#define br cout<<"\n"
#define ff first
#define ss second
#define MAX 202020
#define mp make_pair
#define pb push_back
#define INMX INT_MAX
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define ll long long int
#define ull unsigned long long int
#define scnf(a) scanf("%d",&a)
#define scnfl(a) scanf("%lld",&a)
#define scnf2(a,b) scanf("%d %d",&a,&b)
#define scnf2l(a,b) scanf("%lld %lld",&a,&b)
#define lop(i,n) for(i=0;i<n;i++)
#define lop1(i,n) for(i=1;i<=n;i++)
#define pi 3.14159265358979323846
#define vpl vector<pair<ll,ll> >
#define vpi vector<pair<int,int> >
#define vsort(q) sort(q.begin(),q.end())
#define vsortr(q) sort(q.rbegin(),q.rend())
#define mset(aa) memset(aa, 0, sizeof(aa))
#define debug cout<<"\n---------hi--------"
#define see(x) cout<<"\nvalue of "<<#x<<" = "<<x<<"\n"
void smile();
std::vector<int> edge[20100];
bool vis[20100];

void dfs(int node) {
	vis[node] = 1;
	for (auto child : edge[node]) {
		if (!vis[child]) dfs(child);
	}
}

void solve()
{
	int i, m, j, k, c, a, b, n, x, len, ln, cnt = 0, cunt = 0, sum = 0;
	cin >> n >> m;
	lop(i, m) {
		cin >> a >> b;
		edge[a].pb(b);
		edge[b].pb(a);
	}
	for (i = 1; i <= n; i++) {
		if (!vis[i]) {
			cnt++;
			dfs(i);
		}
	}
	if (cnt == 1 && (m == n - 1)) yes;
	else no;



}

int main()
{
	smile();
	int t = 1;
	// cin >> t;
	while (t--) {
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




