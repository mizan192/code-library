///In the name of Almighty Allah(swt)
///Selection Sort  its eassy than insetion sort
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lop(i,n) for(i=0;i<n;i++)
#define smile ios_base::sync_with_stdio(false);	cin.tie(NULL);

int main()
{
	smile
	int n = 10, i, j, New;
	int ar[n] = {2, 3, 5, 1, 9, 5, 23, 4, 12, 13};

/// selection sort
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if ( ar[i] > ar[j] ) {
				swap( ar[i], ar[j]);
			}
		}
	}

	lop(i, n)
	cout << ar[i] << " ";


	return 0;
}
/*
Time Complexity : O(n2)
1. taking one element and check and swap

*/