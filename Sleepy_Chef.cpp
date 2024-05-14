//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, k; string s; cin >> n >> k >> s;
   int ans = 0, cnt = 0;
   for(int i = 0; i < n; i++) {
     if(s[i] == '0') {
     	cnt++;
     	if(cnt == k) {
     	  ans++;
     	  cnt = 0;
     	}
     }
     else cnt = 0;
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