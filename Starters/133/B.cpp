//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n);
   int sum = 0;
   for(int i = 0; i < n; i++) {
     cin >> a[i];
     sum += a[i];
   }
   sort(a.begin(), a.end());
   for(int i = 0; i < n / 2; i++) sum -= 2 * a[i];
   cout << sum << "\n";
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