#include <iostream>
#include <utility>

using namespace std;



void bubble_sort(int* arr, int N, int K) {
	int cnt[K + 1];
	for (int i = 0; i <= K; i++) {
		cnt[i] = 0;
	}
	for (int i = 0; i < N; i++) {
		cnt[arr[i]]++;
	}
	int idx = 0;
	for (int i = 0; i <= K; i++) {
		for (int j = 0; j < cnt[i]; j++) {
			arr[idx++] = i;
		}
	}
}


int main() {
	int N;
	cout << "Number of numbers: ";
	cin >> N;
	
	cout << "Enter maximum element (K, assuming all elements fall in the range [0, K]): ";
	int K;
	cin >> K;
	
	int arr[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	
	bubble_sort(arr, N, K);
	
	cout << "sorted array: \n";
	for (int i = 0; i < N; i++) {
		cout << arr[i] << ' ';
	}
	cout << '\n';
	
}
