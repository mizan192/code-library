//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int
#define MAX 1000000
#define MOD 23
void smile();
//calculate a^b%MOD
ll mod_expo(ll a, ll b) {
	if (b == 0) return 1LL;
	if (b % 2 == 0) {
		ll expo_half = mod_expo(a, b / 2) % MOD;
		return (expo_half * expo_half) % MOD;
	}
	return (a * mod_expo(a, b - 1)) % MOD;
}

int main()
{
	smile();
	ll a, b, ans;
	a = 3, b = 15;
	// ans = mod_expo(a, b);
	for (int i = 1; i <= 100; i++)
		cout << i << " : " << mod_expo(3, i) << nl;

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
*/





