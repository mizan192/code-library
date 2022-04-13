//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
#define pb push_back
#define ll long long int
#define MAX 1000000
void smile();
//diviosr count for using prime seive
//get prime factor

bool isPrime[MAX + 5]; // initialize value is 0
vector<int> primes, divisors[MAX + 5];

void seive(int n) {
	for (int i = 2; i * i <= n; i++) {
		if (isPrime[i] == 0) {
			for (int j = i * i; j <= n; j += i) {
				isPrime[j] = 1;
			}
		}
	}
	for (int i = 2; i <= n; i++) {
		if (isPrime[i] == 0) primes.pb(i);
	}
}

//----- O(sqrt(N)) -----
int get_divisor_count(ll n) {
	int cnt = 1;
	for (ll i = 0; i < primes.size() && primes[i]*primes[i] <= n; i++) {
		if (n % primes[i] == 0) {
			int pcnt = 0;
			while (n % primes[i] == 0) {
				n /= primes[i];
				pcnt++;
			}
			cnt *= (pcnt + 1);
		}
	}
	if (n > 1) cnt *= 2;
	return cnt;
}

int main()
{
	smile();
	seive(MAX);
	cout << get_divisor_count(99999999999899999LL) << "\n";

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
2^3 * 5^1 * 7^1 * 11^2 = 280 / 2^3 = 35
2^3 * 3^2 = 8 * 9 = 72 --> er divisor 12
(3+1)*(2+1)=12
39 line : number of divisor = prime_divisor+1
42 line : if(n>1) there exist another prime but
protibar n er man bag kore komanor jnno sqrt(n) er
man onk coto hoye jai
1ta prime extra thake tai 1+1=2 dara gun
সুতরাং , n= P1x1 * P2x2 * P3x3 * ……………………………………….Pnxn   হলে
ডিভিসর সংখ্যা , d= (x1+1)*(x2+1)*(x3+1)*……………………………..(xn+1)
*/