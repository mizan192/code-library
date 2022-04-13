///In the name of Almighty Allah(swt)

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
    ios_base::sync_with_stdio(false);
    ///cin.tie(NULL);

    vector<pair <int,int> >v;
    int a,b,n,i;
    cout<<"size of vector ?";
    cin>>n;

    /// input pair and stored in vector
    lop(i,n)
    {
        cin>>a>>b;
        v.push_back( make_pair(a,b) );
    }

    /// output vector
    lop(i,n)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }

/// sort vector of pair
    sort(v.begin(), v.end() );
    lop(i,n)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;

    }



    return 0;
}

