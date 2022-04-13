#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define M 3*10005
bitset<M>mark;   // boolean array intialize with 0
void Sieve()
{
	for (int i = 4; i <= M; i += 2)
	{
		mark[i] = true;
	}
	for (int i = 3; i * i <= M; i += 2)
	{
		if (mark[i] == false)
		{
			for (int j = i * i; j <= M; j += i + i)
			{
				mark[j] = true;
			}
		}
	}
	mark[1] = 1;
}

int main()
{
	int test;
	//cin >> test;
	Sieve();   //all prime number ar stored in mark ary
	

	for (int i = 1; i <= 50; i++) {
		if (mark[i] == 0) cout << i << " ";
	}



	return 0;
}
