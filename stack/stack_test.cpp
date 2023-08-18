#include "stack_ll.hpp"
#include <iostream>

using namespace std;

int main() {
	stack<int> q;
	cout << "1. Push\n2. Pop\n3. Peek\n4. Exit\n";
	int choice;
	cin >> choice;
	while (choice != 4) {
		switch (choice) {
			case 1:
				int val; cin >> val;
				q.push(val);
				break;
			case 2:
				cout << q.pop() << '\n';
				break;
			case 3:
				cout << q.peek() << '\n';
				break;
			default:
				cout << "Invalid choice!";
		}
		cin >> choice;
	}
}
