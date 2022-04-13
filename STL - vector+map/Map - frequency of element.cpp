///In the name of Almighty Allah(swt)
/// count duplicate array element using map
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lop(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
void fast();
void file();
void error();

int main()
{
	fast();
	file();

	int arr[] = {1, 2, 3, 4, 5, 6, 1, 2, 5, 9};
	map<int, int>m;
	map<int, int>:: iterator it;

/// store duplicate element frequency using map
	for (int i = 0; i < 10; i++)
	{
		m[arr[i]] = m[arr[i]]+1;
		/// m[arr[i]]++;     both are same
	}

	for(it=m.begin(); it!= m.end(); it++){
		cout<<it->first <<" : "<<it->second<<endl;
	}




	error();
	return 0;
}


void fast() {
	ios_base::sync_with_stdio(false);	cin.tie(NULL); cout.tie(NULL);
}

void file() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif
}
void error() {
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
}
