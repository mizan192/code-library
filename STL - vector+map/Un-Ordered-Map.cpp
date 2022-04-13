//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
#include<bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"
#define mp make_pair
#define pb push_back
void smile();

int main()
{
    smile();

//unorder map is faster than order map
//when we don't need traverse map only need occurence value than
//unorder map is best.. but for traverse map is required
    unordered_map<int, int> m;

    m[3] = 23;
    m[5] = 8;
    m[19] = 89;
    m[7] = 32;
    m[7] = 329;



    if (!m[6]) cout << '0' << nl;
    else cout << '1' << nl;

    for (auto x : m) cout << x.first << sp << x.second << nl;


    return 0;
}


void smile() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}







