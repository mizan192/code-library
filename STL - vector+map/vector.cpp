#include<bits/stdc++.h>
using namespace std;
void smile();
int main()
{
	smile();
	int i, j;
	std::vector<std::vector<int> > v;

//store element in vector of vector
	for (i = 0; i < 4; i++) {
		std::vector<int> row;
		for (j = 0; j < 6; j++) {
			row.push_back(i + j);
		}
		v.push_back(row);
	}



	for (i = 0; i < v.size(); i++) {
		//cout << v[i] << " ";
		for (j = 0; j < v[i].size(); j++) cout << v[i][j] << " ";
		cout << endl;
	}


	return 0;
}

void smile() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}