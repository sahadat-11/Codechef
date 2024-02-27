//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e1 + 7, mod = 1e9 + 7;
#define int long long
//bool vis[N][N];
void solve() {
   int n, m, x, y, l; cin >> n >> m >> x >> y >> l;
   int u = n - x;
   int d = x - 1;
   int ll = y - 1;
   int r = m - y;
   int tr = u / l + d / l + 1;
   int tc = ll / l + r / l + 1;
   cout << tr * tc << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}