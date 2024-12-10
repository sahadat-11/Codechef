//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
   vector<int> a(3);
   for(int i = 0; i < 3; i++) {
    cin >> a[i];
   }
   sort(a.begin(), a.end());
   if(a[2] - 1 <= a[0] + a[1]) {
    cout << "YES\n";
   }
   else {
    cout << "NO\n";
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