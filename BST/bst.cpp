#include <iostream>
#include <vector>

template <typename T>
class BST {
private:
	struct Node {
		
		T val;
		Node* left;
		Node* right;
		
		Node(const T& value) : val(value) {
			left = (Node*)NULL;
			right = (Node*)NULL;
		}
		
	};
	
public:
	
	void insert(const T& val) {
		size++;
		if (size == 1) {
			root = new Node(val);
			return;
		}
		Node* behind = root;
		Node* node = root;
		while (node != NULL) {
			behind = node;
			if (val > node->val) {
				node = node->right;
			} else {
				node = node->left;
			}
		}
		if (val > behind->val) {
			behind->right = new Node(val);
		} else {
			behind->left = new Node(val);
		}
	}
	
	BST(const std::vector<T>& vals) : size(0) {
		if (vals.empty()) return;
		root = new Node(vals[0]);
		size++;
		for (int i = 1; i < vals.size(); i++) {
			this->insert(vals[i]);	
		}
	}
	
	bool search(const T& val) {
		Node* node = root;
		while (node != NULL) {
			if (val == node->val) {
				return true;
			}
			if (val > node->val) {
				node = node->right;
			} else {
				node = node->left;
			}
		}
		return false;
	}
	
	void print_inorder(Node* node) {
		if (node == NULL) return;
		print_inorder(node->left);
		std::cout << node->val << ' ';
		print_inorder(node->right);
	}
	
	void print_postorder(Node* node) {
		if (node == NULL) return;
		print_postorder(node->left);
		print_postorder(node->right);
		std::cout << node->val << ' ';
	}
	
	void print_preorder(Node* node) {
		if (node == NULL) return;
		std::cout << node->val << ' ';
		print_preorder(node->left);
		print_postorder(node->right);
	}
	
	void print_inorder() {
		print_inorder(root);	
	}
	
	void print_postorder() {
		print_postorder(root);	
	}
	
	void print_preorder() {
		print_preorder(root);	
	}
	
	void clean(Node* node) {
		if (node == NULL) return;
		clean(node->left);
		clean(node->right);
		delete node;
	}
	
	~BST() {
		clean(root);
	}
	
private:
	
	Node* root;
	int size;
	
};

//TESTING

using namespace std;

int main() {
	vector<int> vals{5, 3, 7, 2, 4, 6, 8, 1};
	BST<int> bst = BST<int>(vals);
	cout << "preorder: \n";
	bst.print_preorder();
	cout << "\ninorder: \n";
	bst.print_inorder();
	cout << "\npost order: \n";
	bst.print_postorder();
}
