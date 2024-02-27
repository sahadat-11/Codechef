//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   vector<int> ans(n + 1, 0);
   for(int x = 0; x < n; x++) {
   	 int cur_sum = 0;
   	 for(int i = x; i < n; i++) {
        cur_sum += v[i];
        if(cur_sum <= n) {
        	ans[cur_sum]++;
        }
        else break;
   	 } 
   }
   for(int i = 1; i <= n; i++) cout << ans[i] << " ";
   cout << "\n";
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
