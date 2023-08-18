#pragma once
#include <stdexcept>



//queue implementation with linked list
template <typename T>
class queue {
public:
	int size;
	
	queue() {
		nullptr = (Node*)0;
		size = 0;
		head = nullptr;
		tail = nullptr;
	}
	
	void enqueue(T val) {
		size++;
		if (head == nullptr) {
			head = new Node;
			head->data = val;
			head->next = nullptr;
			tail = head;
		} else {
			tail->next = new Node;
			tail->next->data = val;
			tail->next->next = nullptr;
			tail = tail->next;
		}
	}
	
	T dequeue() {
		size--;
		if (head == nullptr) {
			throw std::underflow_error("dequeueing empty queue");
		} else if (size == 0) {
			T retval = head->data;
			delete head;
			head = nullptr;
			tail = nullptr;
			return retval;
		} else {
			T retval = head->data;
			Node* tmp = head;
			head = head->next;
			delete tmp;
			return retval;
		}
	}
	
	T back() {
		if (head == nullptr) {
			throw std::underflow_error("viewing empty queue");
		}
		return head->data;
	}
	
	struct Node {
		
		T data;
		Node* next;
		
	};

private:

	Node* nullptr;
	
	Node* head;
	Node* tail;
	
};
