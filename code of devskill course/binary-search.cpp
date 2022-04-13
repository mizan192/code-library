//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
#include<bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"
#define ll long long int
#define lop(i,n) for(i=0;i<n;i++)
//-------binary search-------
int find_value(vector<int>&v , int value) {
	int l = 0, r = v.size() - 1;
	while (l <= r) {
		int m = (l + r) / 2;
		if (v[m] < value) {
			l = m + 1;
		}
		else if (v[m] == value) {
			return 1;
		}
		else {
			r = m - 1;
		}
	}
	return 0;
}

//------lower bound ------
int find_lowerBound(vector<int>&v , int value) {
	int l = -1, r = v.size();
	while (l + 1 < r) {
		int m = (l + r ) / 2;
		if (v[m] < value) {
			l = m;
		}
		else {
			r = m;
		}
	}
	return r;
}

//------lower bound---------

int lower - bound(vector<int>&v, int value) {
	int l = 1, r = n, m,ans=1e9+5;
	while (l <= r) {
		m = (l + r) / 2;
		if (ok(v, m)) {
			ans = min(ans, m);
			r = m - 1;
		}
		else {
			l = m + 1;
		}
	}
	return ans;
}




//------upper bound---------
int find_upperBound(vector<int>&v , int value) {
	int l = -1, r = v.size();
	while (l + 1 < r) {
		int m = (l + r ) / 2;
		if (v[m] > value) {
			r = m;
		}
		else {
			l = m;
		}
	}
	return r;
}


int main()
{
	int i, j, result;
	std::vector<int> v = {1, 2, 2, 3, 3, 4, 5, 7, 8};
	result = find_value(v, 5);
	cout << result << nl;


	return 0;
}




/*
cp2-1:35:50
--------lower bound--------
l = -1 & r = n ( 0 based index)
l = 0 & r = n+1 ( 1 based index)
when l+1 == r then break => (l+1<r)
theory is {
	while v[l]>=value then increase r++
	index l will be first position where v[l]<value
}
l & r are pasapasi element where  v[r]=value at first pos
ans = l+1 or r
*/
/*
----------upper bound--------
upper_bound is right most position where, if insert value array will be sorted
l = -1 & r = n ( 0 based index)
l = 0 & r = n+1 ( 1 based index)
when l+1 == r then break => (l+1<r)
theory is {
	while v[l]<=value then increase l++
	index r will be last position where v[r]>value
}
l & r are pasapasi element where  v[l]=value
ans = r or l+1
*/
