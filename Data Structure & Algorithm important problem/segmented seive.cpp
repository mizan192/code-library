//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define MAX 100001
void smile();
 
std::vector<int> prime;
std::vector<int> ans;
void seive() {
	bool isPrime[MAX];
 
	for (int i = 0; i < MAX; i++) isPrime[i] = true;
 
	for (int i = 2; i * i < MAX; i++) {
		if (isPrime[i] == true) {
			for (int j = i * i; j < MAX; j += i) isPrime[j] = false;
		}
	}
 
	prime.pb(2);
	for (int i = 3; i < MAX; i += 2) {     // to remove even number i+=2
		if (isPrime[i] == true) prime.pb(i);
	}
 
	//for (int i = 0; i < 10; i++) cout << prime[i] << " ";
 
}
 
 
 
void segmentSeive(ll l, ll r) {
	bool isPrime[r - l + 1];
 
	for (int i = 0; i < r - l + 1; i++) isPrime[i] = true;
 
	if (l == 1) isPrime[0] = false;
 
	for (int i = 0; prime[i]*prime[i] <= r; i++) {
 
		int curentPrime = prime[i];
		ll base;
 
 
//smaller or equal to l
		base = (l / curentPrime) * curentPrime;
 
		if (base < l) base += curentPrime;
 
//mark all multiples whitin L to R as false
		for (ll j = base; j <= r; j += curentPrime) {
			isPrime[j - l] = false;
		}
 
//where base is itself a prime number
		if (base == curentPrime) isPrime[base - l] = true;
	}
 
 
//print prime within L to R
	for (int i = 0; i < r - l + 1; i++) {
		if (isPrime[i] == true) ans.pb(i + l);
 
	}
 
 
}
 
 
 
 
void solve()
{
	ll l, r;
	//cin >> l >> r;
	l = 2, r = 1e8;
	segmentSeive(l, r);
	for (int i = 0; i < ans.size(); i += 100) cout << ans[i] << endl;
 
}
 
 
int main()
{
	smile();
 
	seive();
 
	int t = 1;
	//cin >> t;
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