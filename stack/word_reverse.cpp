#include "stack.hpp"
#include <iostream>
#include <string>


//reverses word

int MAX_CAPACITY = 1000;

int main() {
	
	std::string word;
	std::getline(std::cin, word);
	
	stack<char> words(MAX_CAPACITY);
	
	for (char ch : word) {
		words.push(ch);
	}
	
	while (words.size > 0) {
		std::cout << words.pop();
	}
	
	std::cout << '\n';
	
}
