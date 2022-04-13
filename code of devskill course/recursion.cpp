#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MAX 1e18
#define MOD 1000000007
ll fact(ll n)
{
    if(n==1) return 1;
    return n*fact(n-1)%MOD;
}
ll fact_tailCall(ll n, ll result)
{
    if(n==1) return result;
    return fact_tailCall(n - 1, (result * n) % MOD);
}

//string palindrome check
bool isPalindrome(string &s, int l, int r)
{
    if(l>=r) return true;
    if(s[l]!=s[r]) return false;
    return isPalindrome(s,l+1,r-1);
}
int main()
{
    ll n;
    string s;
    //cin>>n;
    cin>>s;
    //cout<<fact(n)<<endl;
    //cout<<fact_tailCall(n,1)<<endl;
    cout<<isPalindrome(s,0,s.size()-1)<<endl;

    return 0;
}
