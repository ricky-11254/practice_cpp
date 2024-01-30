#include <bits/stdc++.h>
using namespace std;
int main(){
	int N;
	vector<int> adj[N];
	bool visited[N];
	void dfs(int s) {
		if (visited[s]) return;
		visited[s] = true;
		// process node s
		for (auto u: adj[s]) {
			dfs(u);
		}
	
	}
}
