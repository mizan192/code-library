///In the name of Almighty Allah(swt)
/// prime number count O(n)
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lop(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair

bool chcekPrime(int n) {
	int cnt = 0;
	for (int i = 1; i * i <= n; i++) {
		if (n % i == 0) {

			if ( i * i == n) {  /// if sqrt(n)==i 
				cnt = cnt + 1;
			} else {
				cnt = cnt + 2;
			}
		}
	}
	if (cnt == 2) {
		return true;
	}
	return false;

}





int main()
{
	fast();
	file();

	int n;
	cin >> n;
	int cunt = 0;
	for (int i = 1; i <= n; i++) {
		if (chcekPrime(i) == true)
			cunt++;
	}

	cout << cunt << endl;

	return 0;
}

