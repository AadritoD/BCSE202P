#include <iostream>

using namespace std;

inline void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void bubble_sort(int* arr, int N) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
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
	
	bubble_sort(arr, N);
	
	cout << "sorted array: \n";
	for (int i = 0; i < N; i++) {
		cout << arr[i] << ' ';
	}
	cout << '\n';
	
}
