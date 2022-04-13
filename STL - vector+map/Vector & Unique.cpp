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
    int a,i;
    vector<int>v;
    vector<int>::iterator it;
    lop(i,4)
    {
        cin>>a;
        v.push_back(a);
    }

    it = unique(v.begin(), v.begin()+4);   /// delete duplicate
    v.resize( distance(v.begin(), it ) );  /// resize to new vector

//sort(v.begin(),v.end());
//unique(v.begin(),v.end());

    for(it=v.begin(); it!=v.end(); it++){
        cout<<*it<<endl;
    }

    return 0;
}
