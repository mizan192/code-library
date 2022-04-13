#include<bits/stdc++.h>
using namespace std;

//***Bellman Ford will not work : if there exist a cycle with total weight is : negative
//after performing n time relaxation if n+1th relaxation value will change then it has cycle with neg value

int main()
{

	struct Edge {
		int u, v, weight;
	};

	Edge a, b, c, d, e, f;

	/*আমরা এজ লিস্ট তৈরি করছি, a,b,c,d,e,f যথা ক্রমে আমাদের বিভিন্ন এজ নির্দেশ করছে */

	a.u = 0; a.v = 1; a.weight = 10;
	b.u = 1; b.v = 2; b.weight = 1;
	c.u = 2; c.v = 4; c.weight = 3;
	d.u = 4; d.v = 3; d.weight = -11;
	e.u = 3; e.v = 1; e.weight = 4;
	f.u = 4; f.v = 5; f.weight = 22;

	vector <Edge> E = {a, b, c, d, e, f};

	/*একটা অ্যারে নিতে হবে Cost যার সাইজ হবে মোট নোডের সংখ্যা।  নামে, যেখানে আমরা প্রতিটি আপডেটের হিসাব রাখবো। প্রাথমিক ভাবে আমরা শুরুর নোড ০ বাদে সব নোডের মান INT_MAX বা অসীম করে রাখবো */
	int n = 6;
	int cost[n];
	for (int i = 1; i < n; i++) {
		cost[i] = INT_MAX;
	}
	cost[0] = 0; //শুরুর নোড এর মান শূন্য করে দিলাম

	for (int i = 0; i < n - 1; i++) { /*n-1 বার চলবে*/
		for (Edge edge : E) {
			if (cost[edge.v] > cost[edge.u] + edge.weight) { //যদি নতুন কস্ট আগে রাখা কস্টের চেয়ে ছোট হয়, তবে
				cost[edge.v] = cost[edge.u] + edge.weight; //আমাদের পুরাতন কস্টকে নতুন কস্ট দ্বারা আপডেট করতে হবে।
			}
		}
	}

	//check negative cycle
	for (Edge edge : E) {
		if (cost[edge.v] > cost[edge.u] + edge.weight) { //যদি নতুন কস্ট আগে রাখা কস্টের চেয়ে ছোট হয়, তবে
			cout << "Negetive cycle detected\n";
			break;
		}
	}


	for (int i = 0; i < n; i++) {
		cout << "Distance of node " << i << " from node 0 is " << cost[i] << endl;
	}
	return 0;
}