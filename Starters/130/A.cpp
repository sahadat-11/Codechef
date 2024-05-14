//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int a, b; cin >> a >> b;
   int c = (a % 10) * 10 + a / 10;
   int d = (b % 10) * 10 + b / 10;
   //cout << c << " " << d << endl;
   a = max(a, c); b = min(b, d);
   if(a > b) cout << "YES\n";
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