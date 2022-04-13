///In the name of Almighty Allah(swt)
/// check in map
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
    int n;
    cin>>n;
    map<string, int>m;
    while(n--)
    {
        int t,a;
        cin>>t;
        string s;
        cin>>s;

        if(t == 1)
        {
            cin>>a;

            m[s] += a;
        }
        else if ( t == 2)
            m[s] = 0;
        else
            cout<<m[s]<<endl;

    }




    return 0;
}
