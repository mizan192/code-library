//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
#include<bits/stdc++.h>
using namespace std;
void smile();
#define nl "\n"
#define br cout<<"\n"
#define ll long long int
#define MAX 100000
#define mid (start+end)/2
#define left start, mid, at+at
#define right mid+1, end, at+at+1

int tree[4 * MAX + 5], arr[MAX + 5];

void build(int start, int end, int at) {
	if (start == end) {
		tree[at] = arr[start];
		return;
	}
	build(left);
	build(right);
	tree[at] = min(tree[at + at], tree[at + at + 1]);
}

int query(int start, int end, int at, int l, int r) {
	if (end < l || start > r) return INT_MAX;
	if (start >= l && end <= r) return tree[at];
	int x = query(left, l, r);
	int y = query(right, l, r);
	return min(x, y);
}

void solve()
{
	int i, j, n, q;
	cin >> n >> q;
	for (int i = 0; i < n; i++) cin >> arr[i];

	build(0, n - 1, 1);   //(start,end,at)



//query
	while (q--) {
		int l, r;
		cin >> l >> r;
		cout << query(1, n, 1, l, r) << "\n";

	}


}

int main()
{
	smile();
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}

}


void smile() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
