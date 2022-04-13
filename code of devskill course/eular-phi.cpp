//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
#include<bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"
void smile();
#define MAX 100000

int phi[MAX + 5];

//calculate phi value
void eular_seive() {
	for (int i = 1; i <= MAX; i++) phi[i] = i;
	for (int i = 2; i <= MAX; i++) {
		if (phi[i] == i) { //if phi value is unchange
			for (int j = i; j <= MAX; j += i) { //traverse to multiple of i
				phi[j] /= i;
				phi[j] *= (i - 1);
			}
		}
	}
}

int main()
{
	smile();

	eular_seive();
	for (int i = 2; i <= 20; i++) cout << i << sp << phi[i] << nl;

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
	first divide n by p
	then multiply n by (p-1)
*/