//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 6, mod = 1e9 + 7;
#define int long long
int pre[N];
void solve() {
   int n, k, x; cin >> n >> k >> x;
   if(k > 32) cout << "NO\n";
   else if(pre[k] > x) cout << "NO\n";
   else cout << "YES\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  for(int i = 0; i < 35; i++) {
  	pre[i + 1] = (1ll << i);
  }
  //for(int i = 1; i < 32; i++) cout << pre[i] << endl;
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}