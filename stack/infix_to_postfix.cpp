#include "stack.hpp"
#include <iostream>
#include <string>

using namepsace std;

const int MAX_CAPACITY = 1000;

inline bool is_operand(char token) {
	return (('0' <= token && token <= '9') || ('a' <= token && token <= 'z') || ('A' <= token && token <= 'Z') || (token == '$'));
}

inline bool is_whitespace(char token) {
	return token == ' ' || token == '\t' || token == '\n';
}

inline bool has_greater_precedence(char operator1, char operator2) {
	char operators[] = {'(', ')', '/', '*', '+', '-'};
	int precedence_map[] = {3, 3, 2, 2, 1, 1};
	int operator_count = 6;
	
	int precedence1 = -1, precedence2 = -1;
	for (int i = 0; i < operator_count; i++) {
		if (operators[i] == operator1) {
			precedence1 = precedence1[i];
		}
		if (operators[i] == operator2) {
			precedence2 
			
		}
	} 
} 

int main() {
	string output_buffer;
	string infix_expression;
	getline(cin, infix_expression);
	
	stack<char> operator_stack(MAX_CAPACITY);
	
	for (char token : infix_expression) {
		if (is_whitespace(token)) {
			continue;
		}
		else if (is_operand(token)) {
			output_buffer += token;
			continue;
		} else {
			while (operator_stack.size > 0 || has_greater_precedence(operator_stack.peek(), token))) {
				output_buffer += operator_stack.pop();
			}
			operator_stack.push(token);
		}
	}
	
	while (operator_stack.size > 0) {
		output_buffer += operator_stack.pop();
	}
	
	cout << output_buffer << '\n';
}
