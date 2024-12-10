//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n);
   int mx = 0;
   vector<int> cnt(105, 0);
   vector<bool> used(105, false);
   for(int i = 0; i < n; i++) {
     cin >> a[i];
     mx = max(mx, a[i]);
     cnt[a[i]]++;
     used[a[i]] = true;
   }
   int rem = 0; bool flag = true;
   for(int i = 1; i <= mx; i++) {
     if(!used[i]) {
       if(rem <= 0) flag = false;
       rem--;
     }
     else rem += (cnt[i] - 1);
   }
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