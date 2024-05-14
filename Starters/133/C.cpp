//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n);
   for(int i = 0; i < n; i++) {
     cin >> a[i];
   }
   int ans = 0;
   for(int i = 0; i < n; i++) {
   	if(a[i] == 1) ans += n;
   	else {
   		int cur = 1;
   		for(int j = 0; j < min(32ll, n); j++) {
           cur *= a[i];
           if(cur >= mod) break;
           else if(cur <= a[j]) ans++;
   		}
   	}
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