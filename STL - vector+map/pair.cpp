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

    int n,a,b;
    cin>>n;
     pair<int,int>p[n];

     ///input pair
     lop(i,n)
     {
         cin>>a>>b;
         p[i] = make_pair(a,b);
     }



     lop(i,n){
     cout<<p[i].first<<" "<<p[i].second<<endl;
     }



    return 0;
}

