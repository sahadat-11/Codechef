//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long

void solve() {
   int a; cin >> a;
   if(a == 2) {
   	cout << 4 << " " << 8 << "\n";
   }
   else {
   	cout << 2 * a << " " << a * a << "\n";
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

// https://prnt.sc/0gnijKnN1AFI