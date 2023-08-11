#include <iostream>

using namespace std;

int main() {
	int N; cin >> N;
	
	int arr[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	
	int ans = arr[0];
	for (int i = 0; i < N; i++) {
		ans = max(ans, arr[i]);
	}
	
	cout << ans << '\n';
}
