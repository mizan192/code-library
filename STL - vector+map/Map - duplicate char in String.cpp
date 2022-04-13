///In the name of Almighty Allah(swt)

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lop(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define smile ios_base::sync_with_stdio(false);	cin.tie(NULL);
int main()
{
	smile

	string s;
	cin>>s;
	std::map<char, int> map;
	std::map<char, int> ::iterator it;

	for(int i=0;i<s.length();i++){
		map[s[i]]++;
	}
	
	for(it=map.begin(); it!=map.end(); it++)
		cout<<it->first<<" - "<<it->second<<endl;
	




	return 0;
}
