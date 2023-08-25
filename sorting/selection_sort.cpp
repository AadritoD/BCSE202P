#include <iostream>

using namespace std;

inline void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void selection_sort(int* arr, int N) {
	for (int i = 0; i < N; i++) {
		int min = arr[i], idx = i;
		for (int j = i; j < N; j++) {
			if (arr[j] < min) {
				min = arr[j];
				idx = j;
			}
		}
		swap(arr[i], arr[idx]);
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
	
	selection_sort(arr, N);
	
	cout << "sorted array: \n";
	for (int i = 0; i < N; i++) {
		cout << arr[i] << ' ';
	}
	cout << '\n';
	
}
