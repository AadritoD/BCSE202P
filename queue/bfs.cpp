#include "queue.hpp"
#include <iostream>

using namespace std;

int main() {
	cout << "Number of nodes: ";
	int N; cin >> N;
	cout << "Enter number of edges: ";
	int M; cin >> M;
	
	bool done[N];
	int adj[N][N + 1];
	
	int dp[N];
	
	for (int i = 0; i < N; i++) {
		done[i] = false;
		adj[i][0] = 0;
	}
	
	for (int i = 0; i < M; i++) {
		cout << "enter edge " << i + 1 << " as a u v pair: ";
		int u, v;
		cin >> u >> v;
		adj[u - 1][++adj[u - 1][0]] = v - 1;
		adj[v - 1][++adj[v - 1][0]] = u - 1;
	}
	
	cout << "Enter starting node: ";
	int start;
	cin >> start;
	start--;
	
	cout << "Enter destination node: ";
	int end;
	cin >> end;
	end--;
	
	queue<int> vals(N + 1);
	vals.enqueue(start);
	done[start] = true;
	dp[start] = -1;
	
	while (vals.size != 0 && !done[end]) {
		int node = vals.dequeue();
		for (int i = 1; i <= adj[node][0]; i++) if (!done[adj[node][i]]) {
			dp[adj[node][i]] = node;
			done[adj[node][i]] = true;
			vals.enqueue(adj[node][i]);
		}
	}
	
	cout << end + 1 << " <- ";
	while (dp[end] != -1) {
		end = dp[end];
		cout << end + 1 << " <- ";
	}
	
}
