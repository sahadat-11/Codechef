//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n);
   map<int, int> mp;
   for(int i = 0; i < n; i++) {
     cin >> a[i];
     mp[a[i]]++;
   }
   vector<int> cnt;
   for(auto [u, fre] : mp) {
    cnt.push_back(fre);
   }
   sort(cnt.rbegin(), cnt.rend());
   int ans = 0;
   int sz = cnt.size();
   int now = 0;
   for(int i = 0; i < sz; i++) {
     now += cnt[i];
     ans = max(ans, now / (i + 1) * (i + 1));
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