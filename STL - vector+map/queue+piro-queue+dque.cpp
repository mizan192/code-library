//Bismillahir Rahmanir Raheem,In the name of Almighty Allah(swt)
//Mizanur Rahman -> miz1998an@gmail.com
#include<bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"
#define mp make_pair
#define pb push_back
void smile();
int main()
{
	//smile();


//first in first out

	queue<int>q;
	q.push(5);
	q.push(1);
	q.push(3);
	q.push(2);
	q.push(2);

	cout << "Back elment in queue : " << q.back() << nl;
	while (!q.empty()) {
		cout << q.front() << sp;
		q.pop();
	}
	cout << nl;

//---- priority queue sort element
//--priority queue max heap niye kaj kore
	priority_queue<int>pq;

	pq.push(5);
	pq.push(1);
	pq.push(13);
	pq.push(2);
	pq.push(2);

	while (!pq.empty()) {
		cout << pq.top() << sp;         //max value ta first e asbe
		pq.pop();
	}
	cout << nl;

//qeque
	deque<int>dq;
	dq.push_front(23);
	dq.push_front(13);
	dq.push_front(5);
	dq.push_front(3);

	dq.pop_front();    //erase front element  == 3
	dq.pop_back();    //erase back element  == 23
	for (auto it = dq.begin(); it != dq.end(); it++) {
		cout << *it << sp;
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


