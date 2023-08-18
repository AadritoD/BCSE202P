#include "queue_ll.hpp"
#include <iostream>

using namespace std;

int main() {
	queue<int> q;
	cout << "1. Enqeue\n2. Dequeue\n3. View back\n4. Exit\n";
	int choice;
	cin >> choice;
	while (choice != 4) {
		switch (choice) {
			case 1:
				int val; cin >> val;
				q.enqueue(val);
				break;
			case 2:
				cout << q.dequeue() << '\n';
				break;
			case 3:
				cout << q.back() << '\n';
				break;
			default:
				cout << "Invalid choice!";
		}
		cin >> choice;
	}
}
