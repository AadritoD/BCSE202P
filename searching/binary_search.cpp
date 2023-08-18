#include <iostream>

//returns index if found, -1 otherwise
int binary_search(int* arr, int N, int key) {
	int L = 0, R = N - 1;
	int mid = (L + R) / 2;
	while (L < mid && mid < R) {
		if (arr[mid] == key) {
			return mid;
		} else if (arr[mid] < key) {
			L = mid + 1;
		} else {
			R = mid - 1;
		}
		mid = (L + R) / 2;
	}
	if (arr[L] == key) return L;
	if (arr[R] == key) return R;
	return -1;
}


//TESTING

using namespace std;

int main() {
	int N;
	cin >> N;
	
	cout << "The array is assumed to be given in sorted order\n";
	
	int arr[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	
	int key;
	cin >> key;
	
	cout << binary_search(arr, N, key) << " based on 0-based indexing\n";
}
