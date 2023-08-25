#include <iostream>

inline void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

using namespace std;

//picking partition to be first element
void quick_sort(int* arr, int N) {
	
	if (N <= 1) return;
	
	int pivot = 0;
	for (int i = 1; i < N; i++) {
		if (arr[i] <= arr[pivot]) {
			swap(arr[i], arr[pivot]);
			swap(arr[i], arr[pivot + 1]);
		}
	}
	
	quick_sort(arr, pivot);
	quick_sort(arr + pivot + 1, N - pivot - 1);
}


int main() {
	int N;
	cout << "Number of numbers: ";
	cin >> N;
	
	int arr[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	
	quick_sort(arr, N);
	
	cout << "sorted array: \n";
	for (int i = 0; i < N; i++) {
		cout << arr[i] << ' ';
	}
	cout << '\n';
	
}
