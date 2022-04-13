///In the name of Almighty Allah(swt).

#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<string> s;
    s.push("hello mizan");
    s.push("i hate");
    s.push("you kno");
    s.push("cleaer me");
    cout<<s.top()<<endl; /// return front value
    cout<<s.size()<<endl;  /// return size
    while( !s.empty() ){
        cout<<s.top()<<endl;
        s.pop();
    }




    return 0;
}
