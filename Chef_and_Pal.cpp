//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   if(n & 1) cout << "-1\n";
   else {
   	for(int i = 1; i <= n / 2; i++) cout << 0;
   	for(int i = 1; i <= n / 2; i++) cout << 1;
   	cout << "\n";
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