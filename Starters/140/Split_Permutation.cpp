//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   if(n % 2 == 0) {
    for(int i = 1; i <= n / 2; i++) {
      cout << i << " " << n - i + 1 << " ";
    }
   }
   else {
    for(int i = 1; i <= n / 2; i++) {
      cout << i << " " << n - i << " ";
    }
    cout << n;
   }
   cout << "\n";
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