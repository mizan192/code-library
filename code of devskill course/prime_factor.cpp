//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
#include<bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"
#define br cout<<"\n"
#define ff first
#define pb push_back
#define ll long long int
#define vsort(q) sort(q.begin(),q.end())
#define vsortr(q) sort(q.rbegin(),q.rend())
void smile();
#define MAX 100000

bool isPrime[MAX + 5];
vector<int> primes;
void seive(int n) {
	for (int i = 2; i * i <= n; i++) {
		if (isPrime[i] == 0) {
			for (int j = i * i; j <= n; j += i) {
				isPrime[j] = 1;
			}
		}
	}
	primes.pb(2);
	for (int i = 3; i <= n; i += 2) {
		if (isPrime[i] == 0) primes.pb(i);
	}
}

int primeFactor(int n) {
	int factor = 0;
	for (int i = 0; primes[i]*primes[i] <= n; i++) {
		if (n % primes[i] == 0) {
			while (n % primes[i] == 0) {
				n /= primes[i];
				cout << primes[i] << sp;
				factor++;
			}
		}
	}
	if (n > 1) factor++;
	return factor;
}



int main()
{
	smile();
	int t = 1;
	seive(MAX);
	int n = 1092;
	cout << primeFactor(n) << nl;



	return 0;
}

void smile() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
