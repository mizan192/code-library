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
    map<string,int>m;
map<string,int>::iterator it;
    m["mizan"]=10;
    m["samir"]=20;
    m["monia"]=30;
    m["misus"]=40;
    cout<<"Size of map : "<<m.size()<<endl;
/// print exact value of key samir
    cout<<"value of samir key :  "<<m.at("samir")<<endl;
    /// insert a new pair
    m.insert(pair<string,int> ("hello",23));
    m.insert(make_pair("hello2",43));


    for(it=m.begin(); it!=m.end(); it++)
    {
        cout<<(*it).first<<" -- "<<(*it).second<<endl;;
    }



    return 0;
}
