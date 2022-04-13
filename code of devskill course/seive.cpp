//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
#define pb push_back
#define MAX 1000000
void smile();

bool isPrime[MAX + 5]; // initialize value is 0
vector<int> primes;

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


int main()
{
	smile();
//---- call seive function-----
	seive(MAX);
	for (auto x : primes) cout << x << " ";


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
	initially isPrime[i]=0 & if 0 then prime
	if i is prime then multiple of i will non prime
*/





