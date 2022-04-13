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
    int q;
    cin>>q;
    set<int>s;
    set<int>::iterator it;
    while(q--)
    {
        int y,x;
        cin>>y;
        cin>>x;
        if(y == 3)
        {


            if( s.count(x) == 1 )   /// if found then count=1
            {
                cout<<"Yes"<<endl;
            }
            else
                cout<<"No"<<endl;
        }
        else
            s.insert(x);
    }


    return 0;
}
