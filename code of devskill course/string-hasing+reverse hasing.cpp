//https://paste.ubuntu.com/p/6gxqfRjwmn/
//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
#include<bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"
#define br cout<<"\n"
#define ff first
#define ss second
#define MAX 100000
#define BASE 257
#define MOD 1000000007
#define mp make_pair
#define pb push_back
#define ll long long int
#define lop(i,n) for(i=0;i<n;i++)
#define vsort(q) sort(q.begin(),q.end())
void smile();
//Spoj : Longest Palindrome Substring using reverse hasing

#define MAX 100000
#define BASE 257
#define MOD 1000000007

ll prefix_hash[MAX + 5], reverse_hash[MAX + 5];
ll po[MAX + 5];

void pre(string &s) {
	int n = s.size();
	po[0] = 1;
	for (int i = 1; i <= n; i++) {
		po[i] = (po[i - 1] * BASE) % MOD;
	}
	prefix_hash[0] = s[0];
	for (int i = 1; i < n; i++) {
		prefix_hash[i] = ((prefix_hash[i - 1] * BASE) + s[i]) % MOD;
	}
	reverse(s.begin(), s.end());
	// reverse(s, s + n);
	reverse_hash[0] = s[0];
	for (int i = 1; i < n; i++) {
		reverse_hash[i] = ((reverse_hash[i - 1] * BASE) + s[i]) % MOD;
	}
	reverse(s.begin(), s.end());
	// reverse(s, s + n);
}

ll get_hash(int L, int R) /// O(1)
{
	if (L == 0) return prefix_hash[R];
	ll left = prefix_hash[R];
	ll right = (prefix_hash[L - 1] * po[R - L + 1]) % MOD;
	return (left - right + MOD) % MOD;
}

ll get_reverse_hash(int L, int R)
{
	if (L == 0) return reverse_hash[R];
	ll left = reverse_hash[R];
	ll right = (reverse_hash[L - 1] * po[R - L + 1]) % MOD;
	return (left - right + MOD) % MOD;
}

bool ok(int len, int n) {
	for (int i = 0; i < n - len + 1; i++) {
		ll hash1 = get_hash(i, i + len - 1);
		ll hash2 = get_reverse_hash(n - i - len, n - i - 1);
		if (hash1 == hash2) return true;
	}
	return false;
}

void solve()
{
	int i, j, n;
	cin >> n;
	string s;
	cin >> s;
	n = s.size();
	pre(s);
	std::vector<pair<int, int> > v;


	int l = 1, r = n, m;
	int ans = 1;
	while (l <= r) {
		m = (l + r) / 2;
		bool pal_found = false;
		if (ok(m, n)) {
			ans = max(ans, m);
			l = m + 1;
			pal_found = true;
		}
		if (ok(m + 1, n)) {
			ans = max(ans, m + 1);
			l = m + 2;
			pal_found = true;
		}
		if (!pal_found) r = m - 1;
	}
	cout << ans << nl;

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
	// ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
