//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
#include<bits/stdc++.h>
using namespace std;
void smile();
#define ll long long int
#define MAX 100000
#define mid (start+end)/2
#define left start, mid, at+at
#define right mid+1, end, at+at+1

int tree[4 * MAX + 5], arr[MAX + 5];

void build(int start, int end, int at) {
	if (start == end) {
		tree[at] = arr[start];
		return;
	}
	build(left);
	build(right);
	tree[at] = tree[at + at] + tree[at + at + 1];
}

int query(int start, int end, int at, int l, int r) {
	if (end < l || start > r) return 0;
	if (start >= l && end <= r) return tree[at]; //full range valid
	return query(left, l, r) + query(right, l, r);
}

void update(int start, int end, int at, int index, int value) {
	if (end < index || start > index) return;
	if (start == end && start == index) {
		tree[at] = value;
		return;
	}
	update(left, index, value);
	update(right, index, value);
	tree[at] = tree[at + at] + tree[at + at + 1];
}

int main()
{
	smile();
	int i, j, n, q;
	cin >> n >> q;
	for (int i = 0; i < n; i++) cin >> arr[i];

	build(0, n - 1, 1);   //(start,end,at)

//see tree
	// for (int i = 1; i <= 20; i++) cout << i << ": " << tree[i] << "\n";




//query
	while (q--) {
		int sign;
		cin >> sign;
		//query if sign ==0
		if (sign == 0) {
			int l, r;
			cin >> l >> r;
			cout << query(0, n - 1, 1, l, r) << "\n";
		}
		//update if sign !=0
		else {
			int index, value;
			cin >> index >> value;
			update(0, n - 1, 1, index, value);
		}

	}






	return 0;
}


void smile() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}







