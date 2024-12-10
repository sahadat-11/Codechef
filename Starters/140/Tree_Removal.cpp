//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
const int N = 1e3 + 7;
vector<int> g[N];
int deg[N], val[N], a[N];

void dfs(int vertex, int par) {
    // if(deg[vertex] & 1) {
    //     val[vertex] = max(val[vertex], a[vertex]);
    // }
	for(auto child : g[vertex]) {
		if(child != par) {
			dfs(child, vertex);
            if(deg[child] & 1) {
                val[vertex] += a[child];
            }
		}
	}
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; // n = node m = edge
  for(int i = 1; i <= n; i++) cin >> a[i];
  for(int i = 1; i < n; i++) {
  	int u, v; cin >> u >> v;
  	g[u].push_back(v);
  	g[v].push_back(u);
    deg[u]++;
    deg[v]++;
  } 
  dfs(1, 0);
  for(int i = 1; i <= n; i++) {
    cout << deg[i] << " " << val[i] << "\n";
  }
  cout << "\n";
  return 0;
}