#include <iostream>

//returns index if found, -1 otherwise
int linear_search(int* arr, int N, int key) {
	for (int i = 0; i < N; i++) {
		if (arr[i] == key) {
			return i;
		}
	}
	return -1;
}


//TESTING

using namespace std;

int main() {
	int N;
	cin >> N;
	int arr[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	
	int key;
	cin >> key;
	
	cout << linear_search(arr, N, key) << " based on 0-based indexing\n";
}
