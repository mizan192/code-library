//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define MAX 1000005
void smile();
bool isPrime[MAX];

std::vector<int> prime;

void seive() {

	for (int i = 0; i < MAX; i++) isPrime[i] = true;

	for (int i = 2; i * i < MAX; i++) {
		if (isPrime[i] == true) {
			for (int j = i * i; j < MAX; j += i) isPrime[j] = false;
		}
	}

	prime.pb(2);
	for (int i = 3; i < MAX; i += 2) {
		if (isPrime[i]) prime.pb(i);
	}

}


void solve()
{
	int n, a, b;

	seive();

	cout << prime.size() << endl;

	for (auto x : prime) cout << x << " ";


}



int main()
{
	smile();

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