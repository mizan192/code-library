///In the name of Almighty Allah(swt)
// to delete duplicate int element from vector
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

//multi set duplicate soho store kore and sorted rakhe
//unordered set store unique element with no sort


// set will sort element by himself form small to big

set<int>ss;
set<int> :: iterator t;
ss.insert(344);
ss.insert(24);
ss.insert(24);
ss.insert(4);
ss.insert(134);

// it print small to big
for(t=ss.begin(); t!= ss.end(); ++t)
{
    cout<<(*t)<<"\t";
}

cout<<endl;



   /// it will print big to small

    set<int, greater <int> >s;
    set<int, greater <int> > :: iterator it;
    s.insert(72);
    s.insert(22);
    s.insert(32);
    s.insert(42);
// set will sort element auto from accending to decending
for(it=s.begin(); it!= s.end(); ++it)
{
    cout<<(*it)<<"\t";
}



    return 0;
}

