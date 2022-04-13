///In the name of Almighty Allah(swt)
/// to delete duplicate int element from vector
#include<bits/stdc++.h>
#define ll long long int
#define lop(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
using namespace std;
int main()
{
    vector<string>v;

    int n,i;
    cin>>n;
    string s;
    lop(i,n)
    {
        cin>>s;
        v.push_back(s);
    }

    string k;
    k = v[1];
    cout<<k[0]<<endl;

lop(i,n)
{
    cout<<v[i]<<"\t";
}


    return 0;
}

