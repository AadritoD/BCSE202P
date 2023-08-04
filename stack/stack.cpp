#include <iostream>
#include <stdexcept>

//fixed capacity stack
template <typename T>
class stack {
public:
	int capacity;
	int size;
	
	stack(int total_capacity) : capacity(total_capacity), size(0) {
		_data = new T[capacity];	
	}
	
	~stack() {
		delete[] _data;
	}
	
	void push(const T& val) {
		if (size == capacity) {
			//overflow
			throw std::overflow_error("stack overflow");
		}
		_data[size++] = val;
	}
	
	T pop() {
		if (size == 0) {
			//underflow
			throw std::underflow_error("stack underflow");
		}
		return _data[--size];
	}
	
	T peek() const {
		if (size == 0) {
			//underflow
			throw std::underflow_error("peeking empty stack");
		}
		return _data[size - 1];
	}
	
private:
	T* _data;
	
};

//TESTING
/*
using namespace std;

int main() {
	int capacity;
	cin >> capacity;
	stack<int> my_stack(capacity);
	int choice;
	cin >> choice;
	while (choice == 1 || choice == 2 || choice == 3) {
		if (choice == 1) {
			int val;
			cin >> val;
			my_stack.push(val);
		} else if (choice == 2) {
			cout << my_stack.pop() << '\n';
		} else {
			cout << my_stack.peek() << '\n';
		}
		cin >> choice;
	}
}
*/
