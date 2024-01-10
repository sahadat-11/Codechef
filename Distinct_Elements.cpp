//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7; 
#define ll long long
void solve() {
   int n; cin >> n; int a[n + 1];
   for(int i = 0; i < n; i++) cin >> a[i];
   map<int, int> mp;
   for(int i = 0; i < n; i++) mp[a[i]]++;
   ll ans = 1;
   for(auto [val, cnt] : mp) {
   	 ans = (1ll * ans * (cnt + 1)) % mod;
   }
   cout << ans - 1 << "\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

// https://prnt.sc/1gDwn2gzcF5w


