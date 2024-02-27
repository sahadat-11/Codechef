//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   bool flag = true;
   if(n == 2) {
   	 if(v[0] > v[1]) flag = false;
   }
   if(n == 3) {
   	if(v[1] > max(v[0], v[2]) or (v[1] < min(v[0], v[2]))) {
   	  flag = false;
   	}
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

// https://prnt.sc/Hm4HvTC9DgsR