#include <bits/stdc++.h>
using namespace std;
int queu[100], n = 100, front = -1, rear = -1;


void QInsert() {
	int val;
	if (front == 1 && rear == n || ( front = rear + 1) ) {
		cout << "Overflow" << endl;
	}
	else {
		if (front == 0) {
			front = 1;
			rear = 1;
		}
		else if (rear == n)
			rear = 1;
		else
			rear++;


		cout << "enter new element for queue : " << endl;
		cin >> val;
		queu[rear] = val;

	}
}

void QDelete() {
	if (front == 0)
		cout << "Underflow" << endl;
	else {
		int temp = queu[front];
		cout << "element deleted from queue : " << queu[front] << endl;
		if (front == rear) {
			front = 0;
			rear = 0;
		}
		else if (front == n)
			front = 1;
		else
			front++;
	}

}

void QDisplay() {

	if (front == 0)
		cout << "Queue is empty" << endl;
	else {
		cout << "Queue elements are : " << endl;
		for (int i = front; i <= rear; i++)
			cout << queu[i] << " ";

		cout << endl;
	}

}




int main()
{
	int index;

	cout << "Chose index\n\t1 Insert in Queue\t2 Delete from Queue\t3 Display Queue \t4 Exit"<< endl;

	do {
		cout << "Enter choice : " << endl;
		cin >> index;
		switch (index) {

		case 1: QInsert();
			break;
		case 2: QDelete();
			break;
		case 3: QDisplay();
			break;
		default: cout << "Invaild choice" << endl;

		}










	} while (index != 4);






	return 0;
}