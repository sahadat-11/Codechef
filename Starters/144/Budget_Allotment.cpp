//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
   int n, x; cin >> n >> x;
   vector<int> a(n);
   for(int i = 0; i < n; i++) {
     cin >> a[i];
   }
   sort(a.rbegin(), a.rend());
   int cnt = 0, rem = 0;
   for(int i = 0; i < n; i++) {
     if(a[i] + rem >= x) {
        cnt++; rem += a[i] - x;
     }
     else break;
   }
   cout << cnt << "\n";
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