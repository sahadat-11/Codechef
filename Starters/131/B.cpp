//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, k; cin >> n >> k;
   vector<int> v(n);
   for(int i = 0; i < n; i++) {
     cin >> v[i];
     v[i] %= k;
   }
   sort(v.begin(), v.end());
   int mx = v[n - 1], mn = v[0];
   // for(int i = 0; i < n; i++) {
   //   int x = (mx - v[i]) / k;
   //   v[i] = v[i] + x * k;  
   // }
   // sort(v.begin(), v.end());
   // mx = v[n - 1];
   // mn = v[0];
   int ans = mx - mn;
   for(int i = 0; i < n - 1; i++) {
   	ans = min(ans, v[i] + k - v[i + 1]);
   }
   // for(int i = 0; i < n; i++) {
   //  cout << v[i] << " "; 
   // }
   cout << ans << "\n";
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


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, k; cin >> n >> k;
   vector<int> v(n);
   for(int i = 0; i < n; i++) {
     cin >> v[i];
   }
   sort(v.begin(), v.end());
   int mx = v[n - 1], mn = v[0];
   for(int i = 0; i < n; i++) {
     int x = (mx - v[i]) / k;
     v[i] = v[i] + x * k;  
   }
   sort(v.begin(), v.end());
   mx = v[n - 1];
   mn = v[0];
   int ans = mx - mn;
   for(int i = 0; i < n - 1; i++) {
   	ans = min(ans, v[i] + k - v[i + 1]);
   }
   // for(int i = 0; i < n; i++) {
   //  cout << v[i] << " "; 
   // }
   cout << ans << "\n";
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