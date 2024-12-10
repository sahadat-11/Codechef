//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n);
   for(int i = 0; i < n; i++) {
     cin >> a[i];
   }
   sort(a.begin(), a.end());
   int OR = 0, cnt = 0;
   for(int i = 0; i < n; i++) {
    OR = (OR | a[i]);
    int x = log2(OR) + 1;
    //int xx = __builtin_popcount(OR);
    //cout << OR << " " << x << " " << xx <<"\n";
    if(((1l << x) - 1) == OR) {
      cnt = i + 1;
    }
   }
   cout << n - cnt << "\n";
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