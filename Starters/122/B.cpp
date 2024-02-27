//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   vector<int> v(22);
   for(int i = 0; i < 22; i++) {
   	int a, b; cin >> a >> b;
   	v[i] = a + 20 * b;
   }
   int ans = -1, mx = -1;
   for(int i = 0; i < 22; i++) {
   	 if(v[i] > mx) {
   	 	mx = v[i];
   	 	ans = i + 1;
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