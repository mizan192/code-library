//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define ll long long int
#define lop(i,n) for(i=0;i<n;i++)
#define smile ios_base::sync_with_stdio(false); cin.tie(NULL);
//sort via pair sum
//bool comp(const pair<int, int> &a, const pair<int, int> &b ) {
//    int sum1 = a.first + a.second;
//    int sum2 = b.first + b.second;
//    if (sum2 == sum1) return a.first > b.first;
//    else return sum1 > sum2;
//}

//if first 2 are same then via second
bool cmp(const pair<ll, ll>a, const pair<ll, ll>b)
{
    if (a.first == b.first)
    {
        return (a.second < b.second);
    }
    return a.first > b.first;

}

//sort by second element
bool comp(const pair<int, int> &a, const pair<int, int> &b ) {
    return a.second > b.second;
}

void solve()
{
    int i, j, k, m, len, ln, cnt = 0, cunt = 0, sum = 0;
    ll p, ans = 0, n;
    int a, b;
    cin >> n >> m;
    std::vector<pair<int, int> > v;
    lop(i, m) {
        cin >> a >> b;
        v.push_back(mp(a, b));
    }

    sort(v.begin(), v.end(), comp);

    for (auto x : v) {
        cout << x.ff << " " << x.ss << endl;

    }


//sort vector pair if first 2 are same then via second

    lop(i, m) {
        cin >> a >> b;
        v.push_back(mp(a, b));
    }
    sort(v.begin(), v.end());
    /*
    input in vector  value , index
    4 1
    5 2
    5 3
    9 4
    3 5

    output :
    9 4
    5 2
    5 2
    4 1
    3 5
    */




}

int main()
{
    smile
    int t = 1;
    //cin >> t;

    while (t--) {
        solve();



    }


    return 0;
}
