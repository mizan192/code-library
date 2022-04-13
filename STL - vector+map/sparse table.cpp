//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"
#define ll long long int
#define MAX 100005

int table[20][MAX];
int ar[MAX], LOG[100005];
int n;

void sparse_table() {
	//LOG table generation
	LOG[1] = 0;
	for (int i = 2; i <= n; i++)
		LOG[i] = 1 + LOG[i / 2];

//base : first row
	for (int i = 0; i < n; i++) table[0][i] = ar[i];

	for (int i = 1; i <= LOG[n]; i++) {
		int length = 1 << i;  //2^i
		for (int j = 0; j + length <= n; j++) {
			int a = table[i - 1][j];
			int b = table[i - 1][j + (length / 2)]; //j theke leng pojjoto min
			table[i][j] = min(a, b);
		}
	}
}

//get min
int getMin(int l, int r) {
	int power = LOG[r - l + 1];   //min koto power er pre calculate er ta use korbo
	int pLen = 1 << power; //2^power
	int a = table[p][l];
	int b = table[p][r - pLen + 1];
	return min(a, b);

	//query(l,r) =min(table[k][l],table[k][r-l+1])
}


int main()
{
	int i, j, l, r, q, k;
	cin >> n;
	for (i = 0; i < n; i++) cin >> ar[i];

	//build sparse table

	sparse_table();


	cin >> q;
	while (q--) {
		int l, r;
		cin >> l >> r;

		cout << getMin(l, r) << nl;
	}



	return 0;
}



/*
sparse table e row = 2 er power & column = kon index theke minimum
length  : 2^power-1
table[2][3] : row =2, length : 2^2-1=3
index 3 theke next length pojjonto (3,4,5,6)
pojjonto min ta table[2][3] e store ace

2^k-1 = (1<<k)-1

//code ---
void sparse_table() {
	//LOG table generation
	LOG[1] = 0;
	for (int i = 2; i <= n; i++)
		LOG[i] = 1 + LOG[i / 2];

//base : first row
	for (int i = 0; i < n; i++) table[0][i] = ar[i];

	for (int i = 0; i <= LOG[n]; i++) {
		int length = 1 << i;  //2^i
		for (int j = 0; j + length <= n; j++) {
			if (length == 1) {
				table[i][j] = ar[j];
			}
			else {
				table[i][j] = min(table[i - 1][j], table[i - 1][j + (length / 2)]);
			}
		}
	}
}
*/
