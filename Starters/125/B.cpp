//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; string s; cin >> n >> s;
   int one = count(s.begin(), s.end(), '1');
   int mx = 0, cnt = 0;
   for(auto u : s) {
   	if(u == '0') {
   		cnt++;
   		mx = max(mx, cnt);
   	} 
   	else {
   		mx = max(mx, cnt);
   		cnt = 0;
   	}
   }
   cout << mx + one << "\n";
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