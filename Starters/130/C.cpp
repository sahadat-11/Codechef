//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) {
     cin >> v[i];
   }
   bool flag = true;
   if(v[0] != v[n - 1]) flag = false;
   for(int i = 1; i < n - 1; i++) {
   	if(v[i] < v[i - 1]) flag = false;
   	v[i] = v[0];
   }
   if(flag) cout << "YES\n";
   else cout << "NO\n"; 
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