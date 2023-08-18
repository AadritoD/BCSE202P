#pragma once

#include <stdexcept>

template <typename T>
class stack {
public:
	
	int size;
	
	stack() {
		size = 0;
		nullptr = 0;
		tail = nullptr;
	}
	
	void push(T val) {
		size++;
		if (tail == nullptr) {
			tail = new Node();
			tail->data = val;
			tail->prev = nullptr;
		} else {
			Node* next = new Node();
			next->prev = tail;
			next->data = val;
			tail = next;
		}
	}
	
	T pop() {
		size--;
		if (tail == nullptr) {
			throw std::underflow_error("popping empty stack");
		} else {
			T retval = tail->data;
			tail = tail->prev;
			return retval;	
		}
	}
	
	T peek() {
		return tail->data;
	}
	
private:
	struct Node {
		T data;
		Node* prev;
	};
	
	Node* tail;
	Node* nullptr;
	
	
};
