//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int x; cin >> x;
   // int sum = 0;
   // for(int i = 0; i < 7; i++) {
   // 	 //cout << (1 << i) << " ";
   // 	 sum += (1 << i);
   // }
   // cout << sum << "\n";
   if(x >= 127) cout << "YES\n";
   else cout << "NO\n";
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