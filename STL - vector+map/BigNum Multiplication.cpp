///Bishmillahir Rahmanir Rahim,In the name of Almighty Allah(swt)
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lop(i,n) for(i=0;i<n;i++)
#define lop1(i,n) for(i=1;i<=n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pi 3.14159265358979323846
#define smile ios_base::sync_with_stdio(false);	cin.tie(NULL);
//void file();
//void error();

int main()
{
	smile        //file();

	int t;
//	cin >> t;
//	for (int z = 1; z <= t; z++) {
	string s1, s2;
	while (cin >> s1 >> s2) {
		int sz1, sz2;
		sz1 = s1.size();
		sz2 = s2.size();
		std::vector<ll> v(1000, 0);
		std::vector<ll> v1(sz1);
		std::vector<ll> v2(sz2);
		int i, j;
		for (i = sz1 - 1; i >= 0; i--) {
			v1[sz1 - 1 - i] = s1[i] - '0';
		}
		for (i = sz2 - 1; i >= 0; i--) {
			v2[sz2 - 1 - i] = s2[i] - '0';
		}

		for (i = 0; i < v1.size(); i++) {
			for (j = 0; j < v2.size(); j++) {
				v[i + j] += v1[i] * v2[j];
				v[i + j + 1] += v[i + j] / 10;
				v[i + j] %= 10;
			}
		}
		int l;
		l = sz2 + sz1;
		while (v[l] == 0 && l > 0)
			l--;

		for (i = l; i >= 0; i--) cout << v[i];

		cout << endl;




	}







//	} //lop
//  error();
	return 0;
}

/*
void file() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif
}
void error()
{
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
}

*/