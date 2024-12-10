//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
   int n, m; cin >> n >> m;
   vector<int> a(n), b(n);
   for(int i = 0; i < n; i++) {
     cin >> a[i];
     a[i] = a[i] % m;
   }
   vector<int> cnt(105, 0);
   for(int i = 0; i < n; i++) {
     cin >> b[i];
     b[i] = b[i] % m;
     if(b[i] == 0) b[i] = m;
     cnt[b[i]]++;
   }
   //for(int i = 1; i <)
   int ans = 0;
   for(int i = 0; i < n; i++) {
    ans += (cnt[m - a[i]]);
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