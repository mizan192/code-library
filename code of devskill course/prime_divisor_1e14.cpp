//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
#include<bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"
#define br cout<<"\n"
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define ll long long int
#define lop(i,n) for(i=0;i<n;i++)
#define vsort(q) sort(q.begin(),q.end())
void smile();
#define MAX 10000000

bool isPrime[MAX + 5];
vector<ll> primes;
// std::vector<int> factor(MAX + 5);
std::vector<ll> primeDivisor[MAX + 5];
std::vector<ll> factor;
void seive(ll n) {
	for (ll i = 2; i * i <= n; i++) {
		if (isPrime[i] == 0) {
			for (ll j = i * i; j <= n; j += i) {
				isPrime[j] = 1;
			}
		}
	}
	primes.pb(2);
	for (ll i = 3; i <= n; i += 2) {
		if (isPrime[i] == 0) primes.pb(i);
	}

}

//calculate prime divisor for 1e14
void primeFactor(ll n) {
	// for (ll k = 2; k <= MAX; k++) {
	// cout << nl << k << " -> ";
	ll factorCunt = 0;
	for (ll i = 0; i < primes.size() && primes[i]*primes[i] <= n; i++) {
		if (n % primes[i] == 0) {
			while (n % primes[i] == 0) {
				n /= primes[i];
				// factorCunt++;
				// primeDivisor[k].pb(primes[i]);
				// cout << primes[i] << sp;
			}
			// primeDivisor[k].pb(primes[i]);
			factor.pb(primes[i]);
		}
	}
	if (n > 1) {
		// cout << n;
		factor.pb(n);
		// primeDivisor[k].pb(n);
	}
	// factor[k] = factorCunt;
	// }



}

int main()
{
	smile();
	int t = 1;
	seive(MAX);

	ll n = 100000000000000;
	primeFactor(n);
	for (auto x : factor) cout << x << sp;





	return 0;
}

void smile() {
	// ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
