#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000005
#define BASE 257
#define MOD 1000000007

ll prefix_hash[MAX + 5];
ll po[MAX + 5];

void pre(string &str) {
	po[0] = 1;
	for (int i = 1; i <= str.size(); i++) {
		po[i] = (po[i - 1] * BASE) % MOD;
	}
	prefix_hash[0] = str[0];
	for (int i = 1; i < str.size(); i++) {
		prefix_hash[i] = ((prefix_hash[i - 1] * BASE) + str[i]) % MOD;
	}
}
ll get_hash(int L, int R) {
	if (!L) return prefix_hash[R];
	return (prefix_hash[R] - (prefix_hash[L - 1] * po[R - L + 1] % MOD) + MOD) % MOD;
}


int main()
{
	string s, t;
	cin >> s >> t;
	pre(s);

	ll hash_of_t = 0;
	for (auto c : t)
	{
		hash_of_t = ((hash_of_t * BASE) + c) % MOD;
	}

	for (int i = 0; i + (int)t.size() <= (int)s.size(); i++) /// O(|S|)
	{
		ll range_hash = get_hash(i, i + (int)t.size() - 1); /// [i, i + t.size() - 1]
		if (range_hash == hash_of_t)
		{
			cout << i << "\n";
		}
	}


	return 0;

}

//substring count

ll prefix_hash[MAX + 5];
ll po[MAX + 5];

void pre(string &s)
{
    po[0] = 1;
    for(int i=1; i<=s.size(); i++)
    {
        po[i] = (po[i - 1] * BASE)%MOD;
    }
    prefix_hash[0] = s[0];
    for (int i = 1; i < s.size(); i++)
    {
        prefix_hash[i] = ((prefix_hash[i - 1] * BASE) + s[i]) % MOD;

    }
}

ll get_hash(int l, int r)
{
    if (l==0)
        return prefix_hash[r];
    return (prefix_hash[r] - (prefix_hash[l - 1] * po[r - l + 1] % MOD) + MOD) % MOD;
}




int main()
{
    int t = 1, z = 1;
    cin >> t;
    for(int k=1;k<=t;k++)
    {
         int a, b;
    string s1, s2;
    cin >> s1;
    cin >> s2;
    a = s1.size();
    b = s2.size();

    pre(s1);
    ll hash_s2 = 0;
    for (int i = 0; i < b; i++)
    {
        hash_s2 = ((hash_s2 * BASE) + s2[i]) % MOD;
    }
    ll substringCunt = 0;
    for (int i = 0; i + b <= a; i++)
    {
        ll range_hash = get_hash(i, i + b - 1);
        if (range_hash == hash_s2)
            substringCunt++;
    }

        cout << "Case " << k << ": "<<substringCunt << nl;

    }


    return 0;
}