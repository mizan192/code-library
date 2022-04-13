///In the name of Almighty Allah(swt)

#include<bits/stdc++.h>
#define ll long long int
#define lop(i,n) for(i=0;i<n;i++)
#define pb push_back
#define smile ios_base::sync_with_stdio(false);	cin.tie(NULL);
#define mx 1000000000000000000
void file();
void error();
using namespace std;
int main()
{
	smile
	file();
	//int t;
	string s;
	int a;
	cin >> s;
	cin >> a;
	std::vector<int> v;
	int mod, n = 0, rs;
	for (int i = 0; i < s.length(); i++) {
		n = (n * 10) + (s[i] - '0');
		while (n < a && i < s.length()) {
			i++;
			n = (n * 10) + (s[i] - '0');
			//cout << n << " ";
		}
		if (n >= a) {
			rs = n / a;
			n = n % a;
			//cout << "\nmodulas - " << n << endl;
			v.push_back(rs);  //store bagfol
		}

	}

	cout << "result : ";
	for (int i = 0; i < v.size(); i++)
		cout << v[i];

	cout << endl;

	if (n == 0)
		cout << "divisible" << endl;
	else {
		cout << "not divisible : " << n << endl;
	}







	error();
	return 0;
}

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
