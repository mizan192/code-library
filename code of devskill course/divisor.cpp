//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
#define pb push_back
#define MAX 100000
void smile();
// bool isPrime[MAX + 5]; // initialize value is 0
vector<int> divisors[MAX + 5];
vector<int> divSum(MAX + 5), divCount(MAX + 5);
//----- O(nlogn) -----
void divisor_seive(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j += i) {
			divisors[j].pb(i);
			divSum[i] += i;
			divCount[j]++;
		}
	}
}


//time -> O(sqrt(n))
//this is euler totient function 
void getDivisor(int n) {
  for (int k = 1; k <= n; k++) {
    for (int i = 1; i * i <= k; i++) {
      if (k % i == 0) {

        if (k / i == i) {
          divisors[k].pb(i);
        }
        else {
          divisors[k].pb(i);
          divisors[k].pb(k / i);
        }
      }
    }
  }
}


//------ multiple of 2 : 2,4,6,8...
//------multiple of 3 : 3,6,9,...
//----- multiple from 2 to MX
#define MX 10002
std::map<int, vector<int>>multiple;
void divisor_seive() {
	for (int i = 2; i <= MX; i++) {
		for (int j = i; j <= MX; j += i) multiple[i].pb(j);
	}
}

int main()
{
	smile();
	divisor_seive(MAX);
	// for (int i = 2; i <= MAX; i++) {
	// cout << i << " -> ";
	cout << divCount[12] << nl;    // divisor count for 12
	cout << divSum[12] << nl;   // all divisor sum for 12
	for (auto x : divisors[12]) cout << x << " ";
	cout << nl;
	// }

	return 0;
}


void smile() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

/*
	1 is divisor of all numberr then no need to add 1
	we can start lop from 2 for less time
	logic :
	i is divisor of i*1, i*2,i*3
	i*1= i
	i*2 = i*1+i;
	i*3 = i*2+i;
*/





