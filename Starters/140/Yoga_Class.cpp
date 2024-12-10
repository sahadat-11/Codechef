//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
   int n, x, y; cin >> n >> x >> y;
   int ans = 0;
   if(y >= 2 * x) {
     ans += (y * (n / 2));
     if(n & 1) ans += x;
   }
   else ans += (x * n);
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