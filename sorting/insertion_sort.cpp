#include <iostream>

using namespace std;

inline void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void insertion_sort(int* arr, int N) {
	for (int i = 1; i < N; i++) {
		int idx = i;
		while (idx > 0 && arr[idx] < arr[idx - 1]) {
			swap(arr[idx], arr[idx - 1]);
			idx--;
		}
	}
}


int main() {
	int N;
	cout << "Number of numbers: ";
	cin >> N;
	
	int arr[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	
	insertion_sort(arr, N);
	
	cout << "sorted array: \n";
	for (int i = 0; i < N; i++) {
		cout << arr[i] << ' ';
	}
	cout << '\n';
	
}
