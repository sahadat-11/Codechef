//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   int x = log2(n);
   if((1ll << x) == n) {
    cout << "0\n";
   }
   else {
     int xx = (1ll << (x + 1));
     int y = xx - n;
     cout << n - y << "\n";
   }
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