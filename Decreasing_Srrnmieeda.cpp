//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int l, r; cin >> l >> r;
   if(r < 2 * l) cout << r << "\n";
   else cout << "-1\n";
}
int main() { 
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

// https://prnt.sc/xWP3uOpWfjEo
