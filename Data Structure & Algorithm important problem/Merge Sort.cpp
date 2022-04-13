///In the name of Almighty Allah(swt)
///merge sort  Time complexity : O(n)
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lop(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define smile ios_base::sync_with_stdio(false);	cin.tie(NULL);

void MergeSort(int ar[], int lo, int hi) {
	int temp[hi + 1];
	if (lo == hi) return;
	int mid = (lo + hi) / 2;

	MergeSort(ar, lo, mid);
	MergeSort(ar, mid + 1, hi);
	int i, j, k;
	for (i = lo, j = mid + 1, k = lo; k <= hi; k++) {
		if (i == mid + 1) temp[k] = ar[j++];
		else if (j == hi + 1) temp[k] = ar[i++];
		else if (ar[i] < ar[j]) temp[k] = ar[i++];
		else temp[k] = ar[j++];
	}
	for (k = lo; k <= hi; k++)
		ar[k] = temp[k];

}

int main()
{
	smile
	int n = 10, m;
	int ar[n] = {2, 3, 5, 1, 9, 5, 23, 4, 12, 13};

/// merge sort

	MergeSort(ar, 0, n - 1);

	lop(m, n)
	cout << ar[m]<<" ";




	return 0;
}
