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
#define INMX INT_MAX
#define ll long long int
#define ull unsigned long long int
#define lop(i,n) for(i=0;i<n;i++)
void smile();

//spoj- odd numberr of divisor
//calculate diviosr 1e10


#define MAX 100000
bool isPrime[MAX + 5];
vector<int> primes, divisors[MAX + 5];
std::vector<ll> divisor[10005];
void seive(int n) {
	for (int i = 2; i * i <= n; i++) {
		if (!isPrime[i]) {
			for (int j = i * i; j <= n; j += i) isPrime[j] = 1;
		}
	}
	primes.pb(2);
	for (int i = 3; i <= n; i += 2) {
		if (!isPrime[i]) primes.pb(i);
	}
}

void divisors_count(ll n) {
	divisor[1].pb(1);
	for (ll k = 1; k <= n; k++) {
		ll value = k;
		ll cnt = 1;
		for (int i = 0; i < primes.size(), primes[i]*primes[i] <= value; i++) {
			if (value % primes[i] == 0) {
				int pcnt = 0;
				while (value % primes[i] == 0) {
					value /= primes[i];
					pcnt++;
				}
				cnt *= (2 * pcnt + 1);
			}
		}

		if (value > 1) cnt *= 3;

		divisor[cnt].pb(k * k);

	}
}

int main()
{
	smile();
	seive(MAX);
	//count divisot up to 1e10 using sqrt(n) method
	divisors_count(MAX);


	return 0;
}

void smile() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


/*
	prime factor of n -> p^a,p^b
	than divisor of n -> (a+1)*(b+1)
	at last if value>1 then one prime exist and 1+1 will multiply

	than divisor of n2 -> (2*a+1)*(2*b+1)
	at last if value>1 then two prime exist and 2+1 will multiply


*/