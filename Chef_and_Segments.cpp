//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll n; cin >> n; ll a[n + 1];
  for(ll i = 1; i <= n; i++) cin >> a[i];
  ll pre[n + 1] = {1};
  for(ll i = 1; i <= n; i++) {
  	pre[i] = pre[i - 1] * a[i];
  }
  ll q; cin >> q;
  while(q--) {
  	ll l, r, m; cin >> l >> r >> m;
    ll x = pre[r] / pre[l - 1];
    cout << x % m << "\n";
  }
  return 0;
}
