/***"In the name of Allah(swt), the most gracious, most merciful. Allah(swt) blesses with knowledge whom he wants."***/
/*** "ALHAMDULILLAH for Everything..." ***/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>lst;
    list<int>::iterator it;


    lst.push_back(23);
    lst.push_back(3);
    lst.push_back(73);
    lst.reverse();
    int a;
    cout<<lst.size()<<endl;
    for(int i=0; i<4; i++)
    {
        cin>>a;
        lst.push_back(a);
    }
    for( it=lst.begin(); it!= lst.end(); it++)
        cout<<*it<<endl;
}

