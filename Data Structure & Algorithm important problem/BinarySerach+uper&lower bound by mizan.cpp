//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
#include<bits/stdc++.h>
using namespace std;
#define lop(i,n) for(i=0;i<n;i++)

void smile();

int main()
{
	smile();


	int n, k, i, j;
	cin >> n >> k;
	int a[n];
	lop(i, n) {
		cin >> a[i];
	}
	sort(a, a + n);
	int l, r, x, m;


//uper bound or right most
	// while (k--) {
	// 	cin >> x;
	// 	l = -1, r = n;
	// 	while (r > l + 1) {

	// 		m = (l + r) / 2;
	// 		if (a[m] < x) l = m;
	// 		else r = m;

	// 	}

	// 	cout << r + 1 << endl;
	// }


// lower bound or left most
	// while (k--) {
	// 	cin >> x;
	// 	l = -1, r = n;
	// 	while (r > l + 1) {
	// 		m = (l + r) / 2;
	// 		if (a[m] <= x) l = m;
	// 		else r = m;
	// 	}
	// 	cout << l + 1 << endl;
	// }


// binary search
	// while (k--) {
	// 	cin >> x;
	// 	l = 0, r = n - 1;
	// 	bool ok = false;
	// 	while (r >= l) {

	// 		m = (l + r) / 2;

	// 		if (a[m] == x) {
	// 			ok = true;
	// 			break;
	// 		}
	// 		else if (a[m] < x) l = m + 1;
	// 		else if (a[m] > x ) r = m - 1;

	// 	}

	// 	if (ok) cout << "YES\n";
	// 	else cout << "NO\n";
	// }

//binary searh can be done by upper bound
//uper bound or right most code
	// while (k--) {
	// 	cin >> x;
	// 	l = -1, r = n;
	// 	while (r > l + 1) {

	// 		m = (l + r) / 2;
	// 		if (a[m] < x) l = m;
	// 		else r = m;
	// 	}

	// if (r < n && a[r] == x) cout << "YES\n";
	// else cout << "NO\n";

	// }







	return 0;
}

void smile() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	//freopen("error.txt", "w", stderr);
#endif
}
