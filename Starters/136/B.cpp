//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   string s; cin >> s;
   int l = 0, r = 0, u = 0, d = 0, cnt = 0;
   if(s[0] == '1') l++, cnt++;
   if(s[1] == '1') r++, cnt++;
   if(s[2] == '1') u++, cnt++;
   if(s[3] == '1') d++, cnt++;
   //cout << cnt << "\n";
   if(cnt == 1) cout << "11\n";
   else if(cnt == 2) {
   	 if((l and r) or (u and d)) cout << "21\n";
   	 else cout << "121\n";
   }
   else if(cnt == 3) {
   	cout << "231\n";
   }
   else {
   	cout << "441\n";
   }
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