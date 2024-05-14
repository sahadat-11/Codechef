//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; string a, b; cin >> n >> a >> b;
   int want_change = 0, b_cnt = 0; bool flag = true;
   for(int i = 0; i < n; i++) {
     if((b[i] == 'b' and a[i] != 'b') or (a[i] == 'b' and b[i] != 'b')) flag = false;
     if(a[i] == 'b') b_cnt = want_change;
     if(b[i] != a[i]) {
      if(a[i] == 'a') want_change++;
      if(a[i] == 'c') {
        want_change--;
        b_cnt--;
        if(want_change < 0 or b_cnt < 0) flag = false;
      }
     }
   }
   if(want_change > 0) flag = false;
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

// https://www.codechef.com/viewsolution/1053187780