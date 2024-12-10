//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
   int n, m; cin >> n >> m;
   string a, b; cin >> a >> b;
   int ans = INT_MAX;
   for(int i = 0; i <= n - m; i++) {
    int cnt = 0;
    for(int j = 0; j < m; j++) {
      if(b[j] != a[i + j]) cnt++;
    }
    ans = min(ans, cnt);
   }
   cout << ans << "\n";
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