#pragma once

#include <iostream>
#include <stdexcept>

//fixed capacity queue
template <typename T>
class queue {
	
public:
	
	int size;
	
	queue(int capacity) : _capacity(capacity), size(0), _front(-1), _rear(-1) {
		_data = new T[capacity];
	}
	
	~queue() {
		delete[] _data;
	}
	
	void enqueue(T val) {
		size++;
		if (size == 1) {
			_front = 1;
			_rear = 0;
			_data[0] = val;
			return;
		}
		
		if (_front == _capacity) {
			throw std::overflow_error("Overflow");
		}
		_data[_front++] = val;
		
	}
		
	T dequeue() {
		if (size == 0) {
			throw std::underflow_error("dequeueing empty queue");
		}
		size--;
		return _data[_rear++];
	}
	
	T back() {
		if (size == 0) {
			throw std::underflow_error("peeking empty queue");
		}
		return _data[_rear];
	}

private:
	
	int _capacity;
	int _front;
	int _rear;
	T* _data;
	
};

//TESTING
int main() {
	queue<int> q(200);
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	std::cout << q.dequeue() << '\n';
	std::cout << q.back() << '\n';
}
