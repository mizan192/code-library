///In the name of Almighty Allah(swt)
///Bubble Sort
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lop(i,n) for(i=0;i<n;i++)
#define smile ios_base::sync_with_stdio(false);	cin.tie(NULL);

int main()
{
	smile
	int n = 10, i, j, temp;
	int ar[n] = {2, 3, 5, 1, 9, 5, 23, 4, 12, 13};

/// bubble  sort it will sorted as decending to assending
	for (i = 0; i < n; i++) {
		for (j = 0; j < n - 1; j++) {
			if ( ar[j + 1] > ar[j] ) {
				temp      = ar[j];
				ar[j]     = ar[j + 1];
				ar[j + 1] = temp;
			}
		}
	}
	lop(i, n)
	cout << ar[i] << " ";

	/// bubble  sort it will sorted as assending to descending
	for (i = n - 1; i >= 0; i--) {
		for (j = 1; j <= i; j++) {

			if ( ar[j - 1] > ar[j] ) {

				temp       =  ar[j - 1];
				ar[j - 1]  =  ar[j];
				ar[j]      =  temp;
			}
		}
	}
	cout << endl;
	lop(i, n)
	cout << ar[i] << " ";






	return 0;
}
