//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; string s; cin >> n >> s;
   int cnt1 = 0, cnt2 = 0;
   if(s[0] == '0') cnt1++;
   if(s[0] == '1') cnt2++;
   for(int i = 1; i < n; i++) {
   	if(s[i - 1] == '1' and s[i] == '0') cnt1++;
   	if(s[i - 1] == '0' and s[i] == '1') cnt2++;
   }
   cout << min(cnt1, cnt2) << "\n";
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