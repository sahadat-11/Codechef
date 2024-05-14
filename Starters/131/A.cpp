//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, k; cin >> n >> k;
   vector<int> v(n), dif(n);
   int sum = 0;
   for(int i = 0; i < n; i++) {
     cin >> v[i];
     dif[i] = v[i] - (7 - v[i]);
     sum += v[i];
   }
   sort(dif.begin(), dif.end());
   for(int i = 0; i < k; i++) {
    if(dif[i] < 0) sum += abs(dif[i]);
    else break;
   }
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