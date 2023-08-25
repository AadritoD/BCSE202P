#include <iostream>

using namespace std;

void merge_sort(int* arr, int N) {
	if (N <= 1) return;
	int mid = N / 2;
	merge_sort(arr, mid);
	merge_sort(arr + mid, N - mid);
	int temp[N];
	for (int i = 0; i < N; i++) {
		temp[i] = arr[i];
	}
	int ptr1 = 0, ptr2 = mid;
	for (int i = 0; i < N; i++) {
		if (ptr1 == mid) {
			arr[i] = temp[ptr2++];
		} else if (ptr2 == N) {
			arr[i] = temp[ptr1++];
		} else if (temp[ptr1] < temp[ptr2]) {
			arr[i] = temp[ptr1++];
		} else {
			arr[i] = temp[ptr2++];
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
	
	merge_sort(arr, N);
	
	cout << "sorted array: \n";
	for (int i = 0; i < N; i++) {
		cout << arr[i] << ' ';
	}
	cout << '\n';
	
}
